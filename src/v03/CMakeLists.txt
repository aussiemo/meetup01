project(v03)

add_executable(v03 TestCircle.cpp Circle.cpp)
target_include_directories(v03 PUBLIC /usr/local/include)
target_link_libraries(v03 -L/usr/local/lib -lgtest_main -lgtest)

add_test(NAME v03Test
         COMMAND $<TARGET_FILE:v03>)