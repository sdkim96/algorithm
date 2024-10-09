#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace rectangle {
    class Rectangle {

        public:
            Rectangle(int h, int w);
            ~Rectangle();
            int getHeight();
            int getWidth();
            int setHeight(int h);
            int setWidth(int w);

            int getArea();

            bool operator==(const Rectangle& s) const;
            Rectangle operator+(const Rectangle& s);
            Rectangle operator-(const Rectangle& s);

        private:
            int height;
            int width;
        
    };

#endif // RECTANGLE_H
}

