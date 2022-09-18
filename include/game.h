/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#include <vector>

using std::vector;

class Game() {
public:
    bool check();  // check win

private:
    ChessBoard chess_board;
    Player A;
    Player B;
    bool play_turn;
}