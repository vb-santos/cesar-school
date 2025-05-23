function classiTriangulo(a, b, c){
    if((a == b) && (b == c) && (a == c)){
        return "Equilátero";
    }
    else if((a != b) && (b != c) && (a != c)){
        return "Escalo";
    }
    else{
        return "Isósceles";
    }
}

console.log(classiTriangulo(1, 2, 3));
console.log(classiTriangulo(2, 2, 4));
console.log(classiTriangulo(3, 3, 3));