ifndef PREFIX
  PREFIX=$(dir $(shell dirname `which gnatls`))
endif
LIBDIR ?= ${PREFIX}/lib
DESTDIR ?=
GNATFLAGS ?=
ADA_PROJECT_DIR ?= ${PREFIX}/lib/gnat
GPRBUILD = gprbuild ${GNATFLAGS} -p


PROJECT_NAME = lua_ada

compile:
	mkdir -p lib
	mkdir -p obj
	${GPRBUILD} -P ${PROJECT_NAME}.gpr

tests: compile
	mkdir -p bin
	${GPRBUILD} -P ${PROJECT_NAME}_tests.gpr
	cp tests/*.lua bin

uninstall:
	rm -rf ${DESTDIR}/${PREFIX}/include/${PROJECT_NAME} ${DESTDIR}/${LIBDIR}/openclada ${DESTDIR}/${ADA_PROJECT_DIR}/${PROJECT_NAME}.gpr

install: compile uninstall
	mkdir -p ${DESTDIR}/${PREFIX}/include/${PROJECT_NAME}
	mkdir -p ${DESTDIR}/${LIBDIR}/${PROJECT_NAME}
	mkdir -p ${DESTDIR}/${ADA_PROJECT_DIR}

	cp -r lib/* ${DESTDIR}/${LIBDIR}/${PROJECT_NAME}

	cp -f src/*.ads ${DESTDIR}/${PREFIX}/include/${PROJECT_NAME}
	chmod -w ${DESTDIR}/${PREFIX}/include/${PROJECT_NAME}/*.ads
	cp ${PROJECT_NAME}.gpr ${DESTDIR}/${ADA_PROJECT_DIR}
all: compile

clean:
	rm -rf ./obj ./bin ./lib

.PHONY: tests
