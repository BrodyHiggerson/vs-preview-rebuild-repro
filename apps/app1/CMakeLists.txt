PROJECT(app1)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
	lib1
	lib2
)
