//
// Created by XSpat on 6/28/2022.
//

#ifndef P1_3_H
#define P1_3_H

class milhas
{
    float x;

public:
    milhas(float x);
    milhas();
    operator float();
};

class metros
{
public:
    metros(float x);
    metros();
    metros(milhas milhas);
    bool operator==(const metros) const;
    bool operator!=(const metros) const;
    bool operator<(const metros) const;
    bool operator<=(const metros) const;
    bool operator>(const metros) const;
    bool operator>=(const metros) const;

    operator float();
    operator milhas();
    metros operator+(metros metro);
    metros operator-(metros metro);
    metros operator--();
    metros operator--(int);
    metros operator++();
    metros operator++(int);

private:
    float x;
};

#endif //P1_3_H
