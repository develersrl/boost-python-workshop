#pragma once

class my_class {
public:
    my_class();

    my_class(const my_class& other);

    my_class(my_class&& other);

    ~my_class();

    my_class &operator=(const my_class& other);

    my_class &operator=(my_class&& other);

    void say_hello() const;

    static void export_class();
};
