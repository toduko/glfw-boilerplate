APP_NAME:=glfw-boilerplate
OSFLAG:=
ifeq ($(OS),Windows_NT)
	OSFLAG = -G "MinGW Makefiles"
endif
default:
	cmake . -B build -D APP_NAME=${APP_NAME} ${OSFLAG}
	$(MAKE) -C build
	build/${APP_NAME}