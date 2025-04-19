const notas = [5, 6, 7, 9, 10, 3, 4, 5, 6, 3]; //10

// console.log(notas.length);

let averageNotes = 0;
function average() {
  for (let i = notas.length - 1; i >= 0; i--) {
    averageNotes = averageNotes + notas[i];
  }
  averageNotes = averageNotes / notas.length;
  return averageNotes;
}

average();
console.log(averageNotes);
