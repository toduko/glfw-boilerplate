APP_NAME:=glfw-boilerplate

default:
	cmake . -B build -D APP_NAME=${APP_NAME}
	$(MAKE) -C build
	build/${APP_NAME}