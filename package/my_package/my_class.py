class my_class:
    def __init__(self):
        from . import _core
        self._obj = _core.my_class()

    def __del__(self):
        self._obj = None

    def say_hello_from_python(self) -> None:
        print("[Py ] Hello there! I'm a Python function.")

    def say_hello_from_cpp(self) -> None:
        self._obj.say_hello()
