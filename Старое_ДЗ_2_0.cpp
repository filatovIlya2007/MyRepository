#include <iostream>
using namespace std;

class Game {

    friend class Getgerne;
public:
    string name = "Minecraft";
private:
    string gerne = "Sandbox";

};
class Getgerne {
public:
    string getgerne(Game& G) {

   return G.gerne;
   
    }
};

int main() {
    Game g;
    Getgerne Get;
    cout << "Name: " << g.name << endl;
    cout << "Gerne: " << Get.getgerne(g);

}
