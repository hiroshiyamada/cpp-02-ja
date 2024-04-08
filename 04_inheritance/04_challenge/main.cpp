#include "scene.hpp"
#include "circle.hpp"
#include "square.hpp"

#include <memory>

int main(){
    Scene scene;
    scene.add(new Circle());
    scene.add(new Square());
    scene.render();
    return 0;
}