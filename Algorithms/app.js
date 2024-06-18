//Criando um Buffer  [00 00 00 00 00 00 00 00]
const buffer = new ArrayBuffer(8);

// Criando uma visao Uint8Array do Buffer que acabou de ser criado
const vision = new Uint8Array(buffer);

vision[0] = 23; //valor sera armazenado em binario e seu log e em hexadecimal
vision[5] = 72;

// Criando uma visao Uint16Array do Buffer que acabou de ser criado
const vision16 = new Uint16Array(buffer);

vision16[3] = 12;
vision16[1] = 93;

// console.log(buffer);

// ###########################2##########################################

const buffer2 = new ArrayBuffer(8);
const dataView = new DataView(buffer2);

dataView.setInt16(0, 32767); //<7f ff 00 00 00 00 00 00>
dataView.setInt32(1, -2147483648); //<7f ff 80 00 00 00 00 00>
console.log(dataView);
