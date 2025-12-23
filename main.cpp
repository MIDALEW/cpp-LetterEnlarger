#include <iostream>
#include <string>

int main() {
    std::string lines[7] = {"","","","","","",""};
    std::string letters;
    std::getline(std::cin, letters);

    for (char c : letters) {
      if(c==' '){
        for(std::string& s : lines){
          s+=   "       ";
        }
      }
      else if (c == 'a' || c == 'A') {
    lines[0] += "  A    ";
    lines[1] += " A A   ";
    lines[2] += "A   A  ";
    lines[3] += "AAAAA  ";
    lines[4] += "A   A  ";
    lines[5] += "A   A  ";
    lines[6] += "A   A  ";
} else if (c == 'b' || c == 'B') {
    lines[0] += "BBBB   ";
    lines[1] += "B   B  ";
    lines[2] += "B   B  ";
    lines[3] += "BBBB   ";
    lines[4] += "B   B  ";
    lines[5] += "B   B  ";
    lines[6] += "BBBB   ";
} else if (c == 'c' || c == 'C') {
    lines[0] += " CCCC  ";
    lines[1] += "C      ";
    lines[2] += "C      ";
    lines[3] += "C      ";
    lines[4] += "C      ";
    lines[5] += "C      ";
    lines[6] += " CCCC  ";
} else if (c == 'd' || c == 'D') {
    lines[0] += "DDDD   ";
    lines[1] += "D   D  ";
    lines[2] += "D    D ";
    lines[3] += "D    D ";
    lines[4] += "D    D ";
    lines[5] += "D   D  ";
    lines[6] += "DDDD   ";
} else if (c == 'e' || c == 'E') {
    lines[0] += "EEEEE  ";
    lines[1] += "E      ";
    lines[2] += "E      ";
    lines[3] += "EEE    ";
    lines[4] += "E      ";
    lines[5] += "E      ";
    lines[6] += "EEEEE  ";
} else if (c == 'f' || c == 'F') {
    lines[0] += "FFFFF  ";
    lines[1] += "F      ";
    lines[2] += "F      ";
    lines[3] += "FFF    ";
    lines[4] += "F      ";
    lines[5] += "F      ";
    lines[6] += "F      ";
} else if (c == 'g' || c == 'G') {
    lines[0] += " GGGG  ";
    lines[1] += "G      ";
    lines[2] += "G      ";
    lines[3] += "G  GG  ";
    lines[4] += "G   G  ";
    lines[5] += "G   G  ";
    lines[6] += " GGG   ";
} else if (c == 'h' || c == 'H') {
    lines[0] += "H   H  ";
    lines[1] += "H   H  ";
    lines[2] += "H   H  ";
    lines[3] += "HHHHH  ";
    lines[4] += "H   H  ";
    lines[5] += "H   H  ";
    lines[6] += "H   H  ";
} else if (c == 'i' || c == 'I') {
    lines[0] += " III   ";
    lines[1] += "  I    ";
    lines[2] += "  I    ";
    lines[3] += "  I    ";
    lines[4] += "  I    ";
    lines[5] += "  I    ";
    lines[6] += " III   ";
} else if (c == 'j' || c == 'J') {
    lines[0] += "  JJJ  ";
    lines[1] += "   J   ";
    lines[2] += "   J   ";
    lines[3] += "   J   ";
    lines[4] += "   J   ";
    lines[5] += "J  J   ";
    lines[6] += " JJ    ";
} else if (c == 'k' || c == 'K') {
    lines[0] += "K   K  ";
    lines[1] += "K  K   ";
    lines[2] += "K K    ";
    lines[3] += "KK     ";
    lines[4] += "K K    ";
    lines[5] += "K  K   ";
    lines[6] += "K   K  ";
} else if (c == 'l' || c == 'L') {
    lines[0] += "L      ";
    lines[1] += "L      ";
    lines[2] += "L      ";
    lines[3] += "L      ";
    lines[4] += "L      ";
    lines[5] += "L      ";
    lines[6] += "LLLLL  ";
} else if (c == 'm' || c == 'M') {
    lines[0] += "M   M  ";
    lines[1] += "MM MM  ";
    lines[2] += "M M M  ";
    lines[3] += "M   M  ";
    lines[4] += "M   M  ";
    lines[5] += "M   M  ";
    lines[6] += "M   M  ";
} else if (c == 'n' || c == 'N') {
    lines[0] += "N   N  ";
    lines[1] += "NN  N  ";
    lines[2] += "N N N  ";
    lines[3] += "N  NN  ";
    lines[4] += "N   N  ";
    lines[5] += "N   N  ";
    lines[6] += "N   N  ";
} else if (c == 'o' || c == 'O') {
    lines[0] += " OOO   ";
    lines[1] += "O   O  ";
    lines[2] += "O   O  ";
    lines[3] += "O   O  ";
    lines[4] += "O   O  ";
    lines[5] += "O   O  ";
    lines[6] += " OOO   ";
} else if (c == 'p' || c == 'P') {
    lines[0] += "PPPP   ";
    lines[1] += "P   P  ";
    lines[2] += "P   P  ";
    lines[3] += "PPPP   ";
    lines[4] += "P      ";
    lines[5] += "P      ";
    lines[6] += "P      ";
} else if (c == 'q' || c == 'Q') {
    lines[0] += " QQQ   ";
    lines[1] += "Q   Q  ";
    lines[2] += "Q   Q  ";
    lines[3] += "Q   Q  ";
    lines[4] += "Q Q Q  ";
    lines[5] += "Q  Q   ";
    lines[6] += " QQ Q  ";
} else if (c == 'r' || c == 'R') {
    lines[0] += "RRRR   ";
    lines[1] += "R   R  ";
    lines[2] += "R   R  ";
    lines[3] += "RRRR   ";
    lines[4] += "R R    ";
    lines[5] += "R  R   ";
    lines[6] += "R   R  ";
} else if (c == 's' || c == 'S') {
    lines[0] += " SSSS  ";
    lines[1] += "S      ";
    lines[2] += "S      ";
    lines[3] += " SSS   ";
    lines[4] += "    S  ";
    lines[5] += "    S  ";
    lines[6] += "SSSS   ";
} else if (c == 't' || c == 'T') {
    lines[0] += "TTTTT  ";
    lines[1] += "  T    ";
    lines[2] += "  T    ";
    lines[3] += "  T    ";
    lines[4] += "  T    ";
    lines[5] += "  T    ";
    lines[6] += "  T    ";
} else if (c == 'u' || c == 'U') {
    lines[0] += "U   U  ";
    lines[1] += "U   U  ";
    lines[2] += "U   U  ";
    lines[3] += "U   U  ";
    lines[4] += "U   U  ";
    lines[5] += "U   U  ";
    lines[6] += " UUU   ";
} else if (c == 'v' || c == 'V') {
    lines[0] += "V   V  ";
    lines[1] += "V   V  ";
    lines[2] += "V   V  ";
    lines[3] += "V   V  ";
    lines[4] += " V V   ";
    lines[5] += " V V   ";
    lines[6] += "  V    ";
} else if (c == 'w' || c == 'W') {
    lines[0] += "W   W  ";
    lines[1] += "W   W  ";
    lines[2] += "W   W  ";
    lines[3] += "W W W  ";
    lines[4] += "W W W  ";
    lines[5] += "WW WW  ";
    lines[6] += "W   W  ";
} else if (c == 'x' || c == 'X') {
    lines[0] += "X   X  ";
    lines[1] += " X X   ";
    lines[2] += "  X    ";
    lines[3] += "  X    ";
    lines[4] += "  X    ";
    lines[5] += " X X   ";
    lines[6] += "X   X  ";
} else if (c == 'y' || c == 'Y') {
    lines[0] += "Y   Y  ";
    lines[1] += " Y Y   ";
    lines[2] += "  Y    ";
    lines[3] += "  Y    ";
    lines[4] += "  Y    ";
    lines[5] += "  Y    ";
    lines[6] += "  Y    ";
} else if (c == 'z' || c == 'Z') {
    lines[0] += "ZZZZZ  ";
    lines[1] += "    Z  ";
    lines[2] += "   Z   ";
    lines[3] += "  Z    ";
    lines[4] += " Z     ";
    lines[5] += "Z      ";
    lines[6] += "ZZZZZ  ";
}

    }

    for (const std::string& s : lines) {
        std::cout << s << std::endl;
    }

    return 0;
}
