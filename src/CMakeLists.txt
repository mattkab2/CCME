#set_target_properties(CCME PROPERTIES
#  VERSION ${PROJECT_VERSION}
#  SOVERSION 0
#  PUBLIC_HEADER include/ccme.h
#)

#configure_file(ccme.pc.in ccme.pc @ONLY)

add_library(ccme SHARED
  Matrices/Matrix.h
  Matrices/Matrix.cpp
  Matrices/NaiveMatrix.h
  Matrices/NaiveMatrix.cpp
)

target_include_directories(ccme PRIVATE .)

install(TARGETS ccme
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
#install(FILES ${CMAKE_BINARY_DIR}/ccme.pc
#  DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
#)
