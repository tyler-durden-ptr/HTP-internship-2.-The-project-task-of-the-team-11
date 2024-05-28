#!/bin/bash
set -ou pipefail

exit_code=0

error() {
  exit_code=1
  echo "Error in $1: ${*:2}" >&2
}

# Directories to check
directories=("dir1" "dir2")

# Find all files in the specified directories using git grep
for dir in "${directories[@]}"; do
  for file in $(git grep --cached -Il '' -- "$dir"); do
    if [[ -n "$(dos2unix <"$file" | cmp "$file")" ]]; then
      error "$file" "Found CRLF"
    fi
    if [[ -s "$file" && -n "$(tail -c 1 "$file")" ]]; then
      error "$file" "Doesn't end with a newline character"
    fi
  done
done

exit "$exit_code"
