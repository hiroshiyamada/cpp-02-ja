#include "drawable.hpp"
#include <vector>

class Scene
{
public:
    Scene();
    void render() const;
    void add(Drawable *drawable);

private:
    std::vector<Drawable *> drawables;
};