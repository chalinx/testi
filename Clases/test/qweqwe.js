// qweqwe.ts
// Crear una función que use la interfaz
function greet(person) {
    return "Hello, ".concat(person.name, "! You are ").concat(person.age, " years old.");
}
// Crear un objeto que cumpla con la interfaz
var user = {
    name: "John Doe",
    age: 30
};
// Llamar a la función con el objeto
console.log(greet(user));
// Prueba de errores de tipo
// Descomentar la siguiente línea para ver un error de tipo
// const wrongUser: Person = {
//     name: "Jane Doe",
//     age: "thirty" // Error: Type 'string' is not assignable to type 'number'.
// };
// Prueba de autocompletado
// Escribe "user." y deberías ver sugerencias de autocompletado
console.log(user.name);
