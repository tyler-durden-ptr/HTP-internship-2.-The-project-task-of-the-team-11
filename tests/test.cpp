#include <gtest/gtest.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <string>

namespace rapid = rapidjson;

TEST(example, example) {
    // 1. Parse a JSON string into DOM.
    std::string json = R"({"project":"rapidjson","stars":10})";
    rapid::Document d;
    d.Parse(json.c_str());

    // 2. Modify it by DOM.
    rapid::Value& s = d["stars"];
    s.SetInt(s.GetInt() + 1);

    // 3. Stringify the DOM
    rapid::StringBuffer buffer;
    rapid::Writer<rapid::StringBuffer> writer(buffer);
    d.Accept(writer);

    // Output {"project":"rapidjson","stars":11}
    ASSERT_NE(json, std::string{buffer.GetString()});
}
