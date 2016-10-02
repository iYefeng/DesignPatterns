
add_executable(singleton_test singleton_test.cc Singleton.cc)
target_link_libraries(singleton_test pthread)
