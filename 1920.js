const [N, A, M, B] = require('fs').readFileSync('./input.txt').toString().trim().split('\n').map(v => v.split(" "));
const array = new Set(A);
const result = B.map(v => array.has(v) ? 1 : 0);
console.log(result.join("\n"));