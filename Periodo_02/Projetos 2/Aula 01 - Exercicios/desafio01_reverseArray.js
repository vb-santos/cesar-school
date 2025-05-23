let array = [1, 2, 3, 4, 5];

function inverterArray(array){
    let copiaArray = [...array];
    let inversoArray = copiaArray.reverse();
    console.log("O inverso do Array ", array, " é: " , inversoArray);
}

inverterArray(array);