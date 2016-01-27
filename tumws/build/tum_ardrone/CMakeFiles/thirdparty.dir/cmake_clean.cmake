FILE(REMOVE_RECURSE
  "CMakeFiles/thirdparty"
  "CMakeFiles/thirdparty-complete"
  "../thirdparty/src/thirdparty-stamp/thirdparty-install"
  "../thirdparty/src/thirdparty-stamp/thirdparty-mkdir"
  "../thirdparty/src/thirdparty-stamp/thirdparty-download"
  "../thirdparty/src/thirdparty-stamp/thirdparty-update"
  "../thirdparty/src/thirdparty-stamp/thirdparty-patch"
  "../thirdparty/src/thirdparty-stamp/thirdparty-configure"
  "../thirdparty/src/thirdparty-stamp/thirdparty-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/thirdparty.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
