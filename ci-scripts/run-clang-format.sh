directories=("src" "tests")
files_to_check=$(find "${directories[@]}" -type f \( -name "*.cpp" -o -name "*.h" \))
for file_var in $files_to_check; do
    clang-format --dry-run --Werror "$file_var"
done