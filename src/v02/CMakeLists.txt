project(v02)

add_executable(v02 TestCircle.cpp Circle.cpp)
target_include_directories(v02 PUBLIC /usr/local/include)
target_link_libraries(v02 -L/usr/local/lib -lgtest_main -lgtest)

add_test(NAME v02Test
         COMMAND $<TARGET_FILE:v02>)