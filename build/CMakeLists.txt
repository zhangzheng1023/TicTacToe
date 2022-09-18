cmake_minimum_required(VERSION 3.23)

project (TicTacToe)

SET(SRC_LIST ../src)

# $(TEST_SRC_LIST)
include_directories(../inlcude)


add_executable(main_test ${SRC_LIST}/server/main.cc ${SRC_LIST}/player.cc ${SRC_LIST}/chessboard.cc)

# target_link_libraries(dataBaseTest PRIVATE ${Libs})