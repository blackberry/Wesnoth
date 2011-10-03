# $Id: CMakeLists.txt 43456 2010-06-15 20:04:14Z billynux $

find_package(SDL_net REQUIRED)

include_directories( ../api )

add_executable( sdl_server sdl_server.cpp )

target_link_libraries( sdl_server ${SDLNET_LIBRARY} )

add_executable( ana_client ana_client.cpp )

target_link_libraries( ana_client ana )
