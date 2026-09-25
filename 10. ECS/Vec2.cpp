#include <iostream>
using namespace std;

class Vec2{
  private:

  public:
    float x;
    float y;
    Vec2(){}
    Vec2(float xInput,float yInput)
    :x(xInput),
    y(yInput)
    {}
    Vec2 operator + (Vec2& rhs)const{
      return Vec2{x+rhs.x,y+rhs.y};
    } 
    void operator += (Vec2& rhs){
      x+=rhs.x;
      y+=rhs.y;
    }
    Vec2 add (Vec2& rhs){
      x+=rhs.x;
      y+=rhs.y;
      return *this;
    }
};



int main(){
  Vec2 position (100,130);
  Vec2 size (120,320);
  Vec2 add = position + size;
  cout << add.x << " " << add.y << "\n";


  for(int i=0; i<10; i++){
    add+=size;
    cout << add.x << " " << add.y << "\n";
  }

  size.add(position);
  cout << size.x << " " << size.y << "\n";


  return 0;
}