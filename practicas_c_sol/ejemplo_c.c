// -----------------------------
// Variables globales
// -----------------------------
let estudiantes = [
  { nombre: "Ana", nota: 85 },
  { nombre: "Luis", nota: 58 },
  { nombre: "Carla", nota: 91 },
  { nombre: "Pedro", nota: 73 },
  { nombre: "Marta", nota: 45 },
  { nombre: "Jorge", nota: 66 }
];

let promedioGeneral = ___;        // TODO 1
let mejorEstudiante = ___;        // TODO 2
let peorEstudiante = ___;         // TODO 3

// -----------------------------
// Función que calcula el promedio
// -----------------------------
function calcularPromedio() {
  let suma = 0; // variable local
  for (let i = 0; i < estudiantes.length; i++) {
    suma += estudiantes[i].___;   // TODO 4
  }
  promedioGeneral = suma / estudiantes.___;   // TODO 5
}

// -----------------------------
// Función que evalúa aprobados y suspendidos
// -----------------------------
function mostrarResultados() {
  console.log("=== Resultados del grupo ===");
  for (let i = 0; i < estudiantes.length; i++) {
    let alumno = estudiantes[i];
    if (alumno.___ >= 60) {       // TODO 6
      console.log(alumno.nombre + " aprobó con " + alumno.___);  // TODO 7
    } else {
      console.log(alumno.nombre + " suspendió con " + alumno.___); // TODO 8
    }
  }
}

// -----------------------------
// Función que determina mejor y peor estudiante
// -----------------------------
function buscarExtremos() {
  mejorEstudiante = estudiantes[___];   // TODO 9
  peorEstudiante = estudiantes[___];    // TODO 10

  for (let i = 1; i < estudiantes.length; i++) {
    let alumno = estudiantes[i];
    if (alumno.nota > mejorEstudiante.___) {   // TODO 11
      mejorEstudiante = alumno;
    }
    if (alumno.nota < peorEstudiante.___) {    // TODO 12
      peorEstudiante = alumno;
    }
  }
}

// -----------------------------
// Programa principal
// -----------------------------
function main() {
  console.log("Sistema de calificaciones");
  console.log("");

  calcularPromedio();
  mostrarResultados();
  buscarExtremos();

  console.log("");
  console.log("=== Estadísticas ===");
  console.log("Promedio general: " + promedioGeneral.___);  // TODO 13
  console.log("Mejor estudiante: " + mejorEstudiante.___ + " (" + mejorEstudiante.nota + ")"); // TODO 14
  console.log("Peor estudiante: " + peorEstudiante.___ + " (" + peorEstudiante.nota + ")");   // TODO 15
}

main();