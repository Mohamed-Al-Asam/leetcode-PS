if [ ! -d dist ]; then
    echo "There is no dist folder, Creating dist folder..."
    mkdir dist
    echo "Done creating dist folder."
fi

clang++ src/main.cpp -o dist/a.out
./dist/a.out