#include <iostream>

using namespace std;

class point{
int x;
int y;
public:
    void modpoint(int x , int y){
    this->x=x;
    this->y=y;
    }
    point(int x , int y){
    this->x=x;
    this->y=y;
    }
    point(){}

    void affichepoint(){
    cout<<x<<endl;
    cout<<y<<endl;

    }
};

class droite{
point p1;
point p2;

public:
    void affichedroite(){
    p1.affichepoint();
    p2.affichepoint();
    }

    droite(){
    point modpoint(0,0);
    }

    droite(int x1,int x2,int y1,int y2){
    this->p1.modpoint(x1,x2);
    this->p2.modpoint(y1,y2);
    }



};


int main()
{
  point p1;
  point p2;

  p1.modpoint(10 , 20);
  p2.modpoint(5 , 2);
  p1.affichepoint();
  p2.affichepoint();

  droite d1(5,2,8,9);
  droite d2(7,10,18,19);


  d1.affichedroite();
  d2.affichedroite();

    return 0;
}
