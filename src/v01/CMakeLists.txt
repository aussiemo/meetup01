project(v01)

add_executable(v01 TestMeetup.cpp)
target_include_directories(v01 PUBLIC /usr/local/include)
target_link_libraries(v01 -L/usr/local/lib -lgtest_main -lgtest)

add_test(NAME v01Test
         COMMAND $<TARGET_FILE:v01>)