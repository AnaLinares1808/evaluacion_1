/*Fecha: 22/02/2023
  Autor: Ana Paola Linares Guzmán
  Version: 2.5*/
#include <stdio.h>

int main() {
    int puntos = 0;
    char respuesta;
  
    printf("Bienvenido al cuestionario del Amor Propio\nPor favor responde sinceramente para brindarte la mejor experiencia posible <3\n"); 

    // Primera pregunta
    printf("1. ¿Aceptas tus defectos y limitaciones?\n");
    printf("a) Si\nb) No\nc) A veces\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Segunda pregunta
    printf("2. ¿Valoras tus virtudes y logros pese a los comentarios de los demas?\n");
    printf("a) Si\nb) No\nc) No estoy segur@\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Tercera pregunta
    printf("3. ¿Te permites expresar los sentimientos, aunque les disguste a otras personas?\n");
    printf("a) Me expreso sin importar lo que digan\nb) Tengo miedo a que la gente piense mal de mi\nc) Me es indiferente el pensamiento de los demas\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Cuarta pregunta
    printf("4. ¿Cuidas de tu cuerpo y de tu mente?\n");
    printf("a) Siempre\nb) Algunas veces\nc) Casi no\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Quinta pregunta
    printf("5. Antes de hacer una llamada telefónica, ¿ensayas lo que vas a decir? ¿Por qué?\n");
    printf("a) Si, porque evito pasar el ridiculo\nb) No necesariamente, quiero mostrarme por como soy\nc) A veces con el fin de no sentirme nervios@\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Sexta pregunta
    printf("6. ¿Estas haciendo lo que en verdad de apasiona?\n");
    printf("a) Siempre hago lo que me apasiona\nb) Generalmente prefieor complacer a los demas\nc) Nunca hago ni lo que quiero ni lo que me piden \n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Séptima pregunta
    printf("7. ¿Realmente te afecta la opinion d elos demas?\n");
    printf("a) Si\nb) No\nc) No estoy segur@\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Octava pregunta
    printf("8. ¿Tu prioridad es trabajar para ganar dinero?\n");
    printf("a) Si\nb) No, soy feliz con lo que tengo\nc) Considero que el dinero es mas importante que cualquier cosa\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Novena pregunta
    printf("9. ¿Eres feliz con la vida que tienes?\n");
    printf("a) Si\nb) No\nc) No lo se\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Décima pregunta
    printf("10. ¿Tomas las decisiones de tu vida de manera consciente y libre?\n");
    printf("a) Siempre\nb) Algunas veces\nc) Prefiero que alguien mas lo haga por mi\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }
  if (puntos >=70) {
    printf("\nFelicidades, tu amor propio es muy buueno y eres capaz de tomar buenas decisiones, tu corazon esta listo para compartirse con algien mas <3");
  }
  else {
    printf("\nLo siento, aun necesitas trabajar en tu amor propio antes de avanzar en una nueva relacion, no te rindas, eventualmente saldras adelante <3");
  }
  return 0;
}
