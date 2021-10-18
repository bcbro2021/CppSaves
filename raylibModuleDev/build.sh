g++ main.cpp -w -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./include/raylib ./main