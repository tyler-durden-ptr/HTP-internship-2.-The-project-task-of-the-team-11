#include <gtest/gtest.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <string>
#include <memory>
#include <iostream>

#include <entity/UeBlindRequestWrapper.h>

template <typename T>
concept serializableConcept = requires(T t, rapidjson::Document& config, const rapidjson::Document constConfig) {
   { t.serialize(config) } -> std::same_as<void>;
    { t.deserialize(constConfig) } -> std::same_as<void>;
};

static_assert(serializableConcept<UeBlindRequestWrapper>);

TEST(UeBlindRequest, example_serialize) {
    UeBlindRequestWrapper wrapper;
    wrapper.target_cell_id = 24;
    auto measConfig = std::make_unique<MeasConfig>();
    wrapper.measConfig = measConfig.get();
    auto speedStatePars = std::make_unique<MeasConfig::MeasConfig__speedStatePars>();
    speedStatePars->present = MeasConfig__speedStatePars_PR_release;
    speedStatePars->choice.release = 100;
    measConfig->speedStatePars = speedStatePars.get();
    auto measScaleFactor_r12 = std::make_unique<MeasConfig::MeasConfig__measScaleFactor_r12>();
    measScaleFactor_r12->present = MeasConfig__measScaleFactor_r12_PR_release;
    measScaleFactor_r12->choice.release = 101;
    measConfig->measScaleFactor_r12 = measScaleFactor_r12.get();
    rapidjson::Document d;
    wrapper.serialize(d);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    ASSERT_EQ(std::string(buffer.GetString(), buffer.GetLength()),
        R"({"target_cell_id":24,"measConfig":{"speedStatePars":{"release":100},"measScaleFactor_r12":{"release":101}}})");
}

TEST(rapidjsonLib, example) {
    // 1. Parse a JSON string into DOM.
    std::string json = R"({"project":"rapidjson","stars":10})";
    rapidjson::Document d;
    d.Parse(json.c_str());

    // 2. Modify it by DOM.
    rapidjson::Value& s = d["stars"];
    s.SetInt(s.GetInt() + 1);

    // 3. Stringify the DOM
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);

    // Output {"project":"rapidjson","stars":11}
    ASSERT_NE(json, std::string{buffer.GetString()});
}
