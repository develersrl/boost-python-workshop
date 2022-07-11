#!/usr/bin/env python3

import my_package

def main() -> None:
    print(">>> a = my_package.my_class()")
    a = my_package.my_class()

    print(">>> a.say_hello_from_python()")
    a.say_hello_from_python()

    print(">>> a.say_hello_from_cpp()")
    a.say_hello_from_cpp()

    print(">>> a = None")
    a = None

    print("Done.")


if __name__ == "__main__":
    main()
