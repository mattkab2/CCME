add_library(CCME SHARED
  matrix.h
  matrix.cpp
)

set_target_properties(CCME PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION 0
  PUBLIC_HEADER include/ccme.h
)

configure_file(ccme.pc.in ccme.pc @ONLY)

target_include_directories(CCME PRIVATE include)
target_include_directories(CCME PRIVATE src)

install(TARGETS CCME
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(FILES ${CMAKE_BINARY_DIR}/ccme.pc
  DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)
