# minilang

Интерпретатор маленького языка на C++

## Что умеет

- пока ничего

## Как собрать

Нужно: компилятор C++ с поддержкой C++23, CMake, Ninja

```bash
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++
cmake --build build
.\build\minilang.exe
```

## План

- [ ] Лексер: режет текст на токены
- [ ] Парсер: строит дерево выражения
- [ ] Вычислитель: считает результат

## Лицензия

MIT
