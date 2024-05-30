#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define pf printf
#define sf scanf

struct Planta {
    char nombre[50];
    char tipo[20];
    char clima[20];
    char fecha[20];
    int precio;
};

//MENU 1

int plantar() {
    printf("\n   OPCIONES DE PLANTAS \n");
    printf("¿Qué deseas plantar?\n");
    printf("\n");
    printf("1. Azalea               ~ flor       · clima cálido\n");
    printf("2. Bugambilia           ~ arbusto    · clima cálido\n");
    printf("3. Cathalea             ~ herbácea   · clima húmedo\n");
    printf("4. Jacaranda            ~ árbol      · clima cálido\n");
    printf("5. Peonia               ~ flor       · clima frío\n");
    printf("6. Venus atrapamoscas   ~ herbácea   · clima cálido\n");

    int op;
    inicio:
    printf("\n");
    printf("Selecciona una opción: ");
    scanf("%d", &op);

    if(op < 1 || op > 6){
        printf("\nEso no es posible, intente de nuevo.\n");
        goto inicio;
    } else {
        return op;
    }
}

int recomendarPlanta() {
    char tipoPlanta, gustanFlores, gustanArboles, gustanHerbaceas, tipoClima, venusoaza;
    int op;

    inicio:
    printf("\n   ENCUESTA PARA LA RECOMENDACIÓN DE UNA PLANTA \n");
    printf("\n");
    printf("¿Quieres una herbácea, un árbol o una flor? (h/a/f): ");
    scanf(" %c", &tipoPlanta);
printf("\n");
    printf("¿Te gustan las flores? (s/n): ");
    scanf(" %c", &gustanFlores);
printf("\n");
    printf("¿Te gustan los árboles? (s/n): ");
    scanf(" %c", &gustanArboles);
printf("\n");
    printf("¿Te gustan las herbáceas? (s/n): ");
    scanf(" %c", &gustanHerbaceas);
printf("\n");
    printf("¿Qué tipo de clima hay donde vas a plantar, cálido, frío o húmedo? (c/f/h): ");
    scanf(" %c", &tipoClima);
printf("\n");
    if (tipoPlanta == 'h') {
        if (tipoClima == 'c' && gustanHerbaceas == 's') {
            printf("Recomendación: Puedes plantar una Bugambilia, una herbácea de clima cálido.\n");
            op = 2;
        } else if (tipoClima == 'h' && gustanHerbaceas == 's') {
            printf("Recomendación: Puedes plantar una Cathalea, una herbácea de clima húmedo.\n");
            op = 3;
        } else if (tipoClima == 'f' && gustanHerbaceas == 's') {
            printf("Recomendación: Puedes plantar una Peonia, una herbácea de clima frío.\n");
            op = 5;
        } else {
            printf("Puedes considerar otras opciones de herbáceas según tu preferencia y el clima. INTENTE DE NUEVO PORFAVOR\n");
            goto inicio;
        }
    } else if (tipoPlanta == 'a') {
        if (gustanArboles == 's') {
            printf("Recomendación: Puedes plantar una Jacaranda, un árbol de clima cálido.\n");
            op = 4;
        } else {
            printf("Puedes considerar otras opciones de árboles según tu preferencia. INTENTE DE NUEVO PORFAVOR\n");
            goto inicio;
        }
    } else if (tipoPlanta == 'f') {
        if (gustanFlores == 's') {
            printf("Recomendación: Puedes plantar una Venus atrapamoscas o una Azalea, ambas flores son de clima cálido.\n");
            
            venaz:
            printf("¿Cuál deseas usar Azalea o Venus atrapamoscas? (a/v)\n");
            scanf(" %c", &venusoaza);
            
            if (venusoaza == 'a') {
                op = 1;
            } else if (venusoaza == 'v') {
                op = 6;
            } else {
                printf("Eso no es posible. INTENTE DE NUEVO.\n");
                goto venaz;
            }
        } else {
            printf("\nPuedes considerar otras opciones de flores según tu preferencia. INTENTE DE NUEVO PORFAVOR\n");
            goto inicio;
        }
    } else {
        printf("Opción no válida. Inténtalo de nuevo.\n");
        goto inicio;
    }
    return op;
}

//DIAS CON TU PLANTITA

int fCALCULO (int dia, int mes, int ani){
return ((ani * 365) + ((mes -1) * 30) + dia);} //formula para calcular dias transcurridos desde el principio

int fDIFERENCIA (int totis1, int totis2){
return (totis2 - totis1);}

void fIMPRIME (int diferencia){
pf("\nLlevas con tu plantita %d dias !!\n" ,diferencia);} 

//DATO RANDOM

int FunRan(){
    return rand() % 3+1; //Sirve para devolver directamente el numero randomizado
}
int RanPlanta(int n, int r){
    switch(n){
        case 1:{
                switch(r){
                   case 1:
                   printf("Si alguna vez se te antojó probar la miel de la Azalea, no lo hagas, ya que su miel es venenosa.\n");
                   break;
                   
                   case 2: 
                   printf("Algo super increíble de la Azalea es que llega a crecer como una planta casi parásita, esto quiere decir que se monta sobre otra para poder desarrollarse.\n");
                   break;
                   
                   case 3:
                   printf("Las Azaleas pueden vivir varias décadas si se cuidan de manera correcta.\n");
                   break;
            }
            break;
        } 
        case 2:{
                switch(r){
                   case 1:
                   printf("La Bugambilia se asocia con el amor verdadero, pues la Bugambilia representa las llamas gemelas, que son el vínculo superior que tendremos de por vida hacia una persona que amamos\n");
                   break;
                   
                   case 2: 
                   printf("Algo sorprendente de la Bugambilia es que puede tratar infecciones respiratorias como tos, asma, bronquitis y gripe.\n");
                   break;
                   
                   case 3:
                   printf("Por si no lo sabías, es utilizada en las ensaladas dándole así un toque único.\n");
                   break;            
            }
            break;
        }
        case 3:{
                switch(r){
                   case 1:
                   printf("Algo muy curioso es que a la Calathea también se les conoce como las plantas que rezan, ya que en la noche ellas pliegan sus hojas como si fueran manos que están rezando y se vuelven a desplegar con la luz del día\n");
                   break;
                   
                   case 2: 
                   printf("Esta planta, aunque no lo creas, sus hojas originan un leve sonido, que parece un susurro.\n");
                   break;
                   
                   case 3:
                   printf("Algo sorprendente de la Calathea es que sus hojas son sensibles al tacto.\n");
                   break;           
            }
            break;
        }
        case 4:{
                switch(r){
                    case 1:
                    printf("Te sorprendería saber que la Jacaranda llegó  a México desde hace ya casi un siglo, todo esto gracias al paisajista japonés, Tatsugoro Matsumoto.\n");
                    break;
                    
                    case 2:
                    printf("El nombre de las Jacarandas proviene del guaraní y significa ‘fragante’, pero es un decir, ya que las flores de la Jacaranda carecen de olor.\n");
                    break;
                    
                    case 3:
                    printf("Por si no lo sabías, los árboles de Jacaranda increíblemente pueden absorber una gran parte de la contaminación que los autos generan al día, limpian el aire que respiramos y disminuyen el calor de la ciudad. \n");
                    break;
                }
            break;
        }
        case 5:{
                switch(r){
                    case 1:
                    printf("Te apuesto a que no sabías que el nombre de Peonía proviene de la antigua Grecia y significa “Medicina de China”\n");
                    break;
                    
                    case 2:
                    printf("La Peonía es un símbolo de amor, romance y belleza. Así que ya sabes que regalarle a tu pareja!\n");
                    break;
                    
                    case 3:
                    printf("Sorprendentemente la Peonía es una planta medicinal, algunos de sus usos son para tratar enfermedades de las vías respiratorias.\n");
                    break;
                }
            break;
        }
        case 6:{
                switch(r){
                    case 1:
                    printf("¿Sabías que el nombre de Venus Atrapamoscas hace referencia a la diosa romana del amor?\n");
                    break;
                    
                    case 2:
                    printf("Las trampas se activan al rozar 2 de sus 3 pelillos, llamados tricomas.\n");
                    break;
                    
                    case 3:
                    printf("Algo que no creerás es que hay mas Venus Atrapamoscas en macetas que en la naturaleza\n");
                    break;
                }
            break;            
        }
    }
}

//PRESUPUESTO

int obtenerPrecio(int planta) { //cambia de op dependiendo la planta y regresa el precio
    switch (planta) {
        case 1:
            return 1100; // Azalea
        case 2:
            return 1200; // Bugambilia
        case 3:
            return 1200; // Cathalea
        case 4:
            return 1700; // Jacaranda
        case 5:
            return 1500; // Peonia
        case 6:
            return 775;  // Venus atrapamoscas
        default:
            return 0;    // Planta no válida
    }
}

void ChecarPrecio(int planta) {
int presupuesto, precioPlanta;

printf("Ingrese su presupuesto: ");
scanf("%d", &presupuesto);

precioPlanta = obtenerPrecio(planta); //obtiene precio necesario y llama a la función de arriba para devolver si alcanza el presupuesto
printf("\n");
if (presupuesto >= precioPlanta) { //checa si presupuesto es igual o mayor
printf("Presupuesto verificado.\nSi es posible adquirir la planta con el presupuesto indicado.\n");
    } else {
printf("Presupuesto verificado.\nLo sentimos, su presupuesto no es suficiente.\n");
printf("Necesitas un presupuesto de minimo $%d \n", precioPlanta); 
    }
}



//SUELO Y TERRENO

int verificarTipoSuelo(int op)
{   
    //opS es el sistema de opcion local de la función
    //imp te da la opcion de como recibir la información
    int opS, imp; 
    printf("\n");
    printf("\nElige como quieres recibir la información\n");
    printf("\n");
    printf("1. Imprimir información en consola\n");
    printf("2. Imprimir información en archivo txt\n");
    paso26:
    scanf("%i", &imp);
    if(imp<1 || imp>2){
    printf("Eso no es posible!!!\n");
    goto paso26;
    }
       printf("\n");
    //op cambiara dependiendo de la planta
    switch(op){
        case 1:{
                if(imp==1){
                    printf("Tipo de suelo para la Azalea: Buen drenaje y con un alto contenido de materia orgánica\n");
                    printf("pH del suelo: 4.5 a 5.5\n");
                    printf("Clima: templados y frescos.\n");
                    printf("Sol-Sombra: Sombra parcial - Luz filtrada.\n");
                }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_azalea.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo para la Azalea: Buen drenaje y con un alto contenido de materia orgánica\n");
                    fprintf(archivo, "pH del suelo: 4.5 a 5.5\n");
                    fprintf(archivo, "Clima: templados y frescos.\n");
                    fprintf(archivo, "Sol-Sombra: Sombra parcial - Luz filtrada.\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_azalea.txt'.\n");
                    }
            break;
        }
        case 2:{
                if(imp==1){
                    printf("Tipo de suelo de la Bugambilia: debe ser rico en nutrientes,\n debe de contar con un buen drenaje.\n");
                    printf("pH del suelo: 5.5 a 6.5.\n");
                    printf("Clima: Cálidos y templados.\n");
                    printf("Sol-Sombra: Necesita una exposición total al sol\n");
                }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_bugambilia.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo de la Bugambilia: debe ser rico en nutrientes,\n debe de contar con un buen drenaje.\n");
                    fprintf(archivo, "pH del suelo: 5.5 a 6.5.\n");
                    fprintf(archivo, "Climas: cálidos y templados.\n");
                    fprintf(archivo, "Sol-Sombra: Necesita una exposición total al sol\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_bugambilia.txt'.\n");
                    }
            break;
        }
        case 3:{
                if(imp==1){
                    printf("Tipo de suelo de la Cathalea: liviano que retenga algo de humedad, pero que sea a la vez suficientemente poroso como para drenar cualquier exceso rápidamente.\n");
                    printf("pH del suelo: 6.0 a 6.5.\n");
                    printf("Clima: cálido y húmedo\n");
                    printf("Sol-Sombra: Luz indirecta\n");
                }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_cathalea.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo de la Cathalea: liviano que retenga algo de humedad, pero que sea a la vez suficientemente poroso como para drenar cualquier exceso rápidamente.\n");
                    fprintf(archivo, "pH del suelo: 6.0 a 6.5.\n");
                    fprintf(archivo, "Clima: cálido y húmedo\n");
                    fprintf(archivo, "Sol-Sombra: Luz indirecta\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_cathalea.txt'.\n");
                }
            break;
        }
        case 4:{
                if(imp==1){
                    printf("Tipo de suelo de la Jacaranda: bien drenado, arena, franco, ácido a ligeramente alcalino\n");
                    printf("pH del suelo: 5-8\n");
                    printf("Clima: Se desarrolla en climas cálidos y no tolera las heladas.\n");
                    printf("Sol-Sombra: Exposición total al Sol\n");
                }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_jacaranda.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo de la Jacaranda: bien drenado, arena, franco, ácido a ligeramente alcalino\n");
                    fprintf(archivo, "pH del suelo: 5-8\n");
                    fprintf(archivo, "Clima: Se desarrolla en climas cálidos y no tolera las heladas.\n");
                    fprintf(archivo, "Sol-Sombra: Exposición total al Sol\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_jacaranda.txt'.\n");
                }
            break;
            
        }
        case 5:{
                if(imp==1){
                    printf("Tipo de suelo de la Peonia: Suelo rico en nutrientes y bien drenado.\n");
                    printf("pH del suelo: 5.5 a 7.5\n");
                    printf("Clima: templado.\n");
                    printf("Sol-Sombra: Luz solar directa.\n");
                }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_peonia.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo de la Peonia: Suelo rico en nutrientes y bien drenado.\n");
                    fprintf(archivo, "pH del suelo: 5.5 a 7.5\n");
                    fprintf(archivo, "Clima: templado.\n");
                    fprintf(archivo, "Sol-Sombra: Luz solar directa.\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_peonia.txt'.\n");
                }
            break;
            
        }
        case 6:{
                    if(imp==1){
                        printf("Tipo de suelo para la Venus atrapa moscas: ácido y drenado\n");
                        printf("pH del suelo: 4.5 a 5.5\n");
                        printf("Clima: Subtropical\n");
                        printf("Sol-Sombra: Luz indirecta\n");
                    }else if(imp==2){
                    FILE *archivo;
                    archivo = fopen("informacion_venus.txt", "w");
                    fprintf(archivo, "************************\n");
                    fprintf(archivo, "Tipo de suelo para la Venus atrapa moscas: ácido y drenado\n");
                    fprintf(archivo, "pH del suelo: 4.5 a 5.5\n");
                    fprintf(archivo, "Clima: Subtropical\n");
                    fprintf(archivo, "Sol-Sombra: Luz indirecta\n");
                    fprintf(archivo, "************************\n");
                    fclose(archivo);
                    printf("Información escrita en el archivo 'informacion_venus.txt' y descargada.\n");
                }
            break;
            
        }
        }
    }

//TIPS

typedef struct {
    char nombre[50];
    char informacion[200];
    char alimento[200];
    char florecer[200];
    char riego[200];
    char plagas[200];
} Planta;

void MostrarInfo(Planta planta, int opcion) {
    switch (opcion) {
        case 1:
            printf("\nInformación sobre %s\nAlimento para planta: %s\n", planta.nombre, planta.alimento);
            break;
        case 2:
            printf("\nInformación sobre %s\nCómo hacer que aflore de manera óptima: %s\n", planta.nombre, planta.florecer);
            break;
        case 3:
            printf("\nInformación sobre %s\nCada cuándo se riega: %s\n", planta.nombre, planta.riego);
            break;
        case 4:
            printf("\nInformación sobre %s\nPlagas de las que hay que cuidarla: %s\n", planta.nombre, planta.plagas);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }
}

void InfoArchivo(FILE *archivo, Planta planta, int opcion) {
    switch (opcion) {
        case 1:
            fprintf(archivo, "\nInformación sobre %s\nAlimento para planta: %s\n", planta.nombre, planta.alimento);
            break;
        case 2:
            fprintf(archivo, "\nInformación sobre %s\nCómo hacer que aflore de manera óptima: %s\n", planta.nombre, planta.florecer);
            break;
        case 3:
            fprintf(archivo, "\nInformación sobre %s\nCada cuándo se riega: %s\n", planta.nombre, planta.riego);
            break;
        case 4:
            fprintf(archivo, "\nInformación sobre %s\nPlagas de las que hay que cuidarla: %s\n", planta.nombre, planta.plagas);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }
}


int main() {
    int opcion, planta, menu2;
    struct Planta miPlanta;

FILE *archivo;
    archivo = fopen("archivo.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Álvarez Galicia Raúl Alexander 321318714\n");
    fprintf(archivo, "Carbajal Hernandez Alejandro 321141727\n");
    fprintf(archivo, "Chora López Adrián Santiago 321167907\n");
    fprintf(archivo, "Escobar Hernández Angel Emiliano 321013646\n");
    fprintf(archivo, "Gernandt Ortiz Elizabeth 321059994\n");
    fprintf(archivo, "Malfavon Lemus Paris Samantha 321249081\n");
    fprintf(archivo, "Mendoza Camacho Estrella de Maria 321132927\n");
    fprintf(archivo, "Muñoz García Ángel Adolfo 321015815\n");
    fprintf(archivo, "Pineda Pérez Daniel Antonio 321092612\n");
    fprintf(archivo, "Sánchez Soperanes Raúl Haziel 321026303\n");

    fprintf(archivo, "\nFundamentos de programación\n");
    fprintf(archivo, "Grupo 10\n");
    fprintf(archivo, "2024-I\n");
    fprintf(archivo, "Fecha de Entrega: 1 de diciembre de 2023\n");

    fclose(archivo);
    
    printf("                     BIENVENIDX ESTAS USANDO EL:\n");
    printf("  ¡ SISTEMA DE ASESORAMIENTO PARA LA SELECCIÓN Y CUIDADO DE PLANTAS. !   \n");
    printf("\n");
    printf("=== MENU DE SELECCIÓN ===\n");
    printf("\n");
    printf("1. Ya sé qué plantar\n");
    printf("2. No sé qué plantar\n");
     printf("\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    printf("\n");
    
    switch (opcion) {
        case 1:
            planta = plantar();
            break;
        case 2:
            planta = recomendarPlanta();
            break;
        default:
            printf("Opción no válida. Inténtalo de nuevo.\n");
            return 1;
    }
    menu2:
    printf("\n=== MENU DE ASESORAMIENTO, CUIDADO Y MÁS ===\n");
    printf("\n");
    printf(" ¿ Qué deseas realizar ?\n");
    printf("\n");
    printf("1. Días con tu plantita.\n");
    printf("2. Dato curioso de tu plantita.\n");
    printf("3. Presupuesto para tu plantita.\n");
    printf("4. Suelo y Terreno.\n");
    printf("5. Tips y Cuidados.\n");
    printf("6. Salir.\n");
    printf("\n");
    printf("Selecciona una opción: ");
    scanf("%i",&menu2);
    printf("\n");
    switch(menu2){
        case 1:{
            int dia1, mes1, ani1, dia2, mes2, ani2, total1, total2, dif;
            pf("\n¡¡   BIENVENID@ AL CONTADOR   !!");
            pf("\n");
            pf("\nFecha de cuando adquiriste tu planta (d,m,a) :\n");
            sf("%d, %d, %d", &dia1, &mes1, &ani1);
            pf("\nFecha del dia de hoy (d,m,a) :\n");
            sf("%d, %d, %d", &dia2, &mes2, &ani2);
            total1 = fCALCULO(dia1,mes1,ani1);
            total2 = fCALCULO(dia2,mes2,ani2);
            dif = fDIFERENCIA(total1,total2);
            fIMPRIME(dif);
            pf("\n");
            break;
        }
        case 2:{
            printf("¡¡   BIENVENIDX A DATO CURIOSO   !!\nEl Dato random de tu planta es:\n");
            printf("\n");
            int rm;
            srand(time(NULL));
            rm=FunRan();
            RanPlanta(planta, rm);
            printf("\n");
            break;
        }
        case 3:{
            int swis, precio;
            printf("¡¡   BIENDENIDX A PRESUPUESTO   !!\n");
            printf("\n");
            printf("1. Obtener Presupuesto\n");
            printf("2. Checar Presupuesto\n");
            printf("\n");
            printf("Seleccione que desea realizar: ");
            scanf("%d", &swis);
            switch (swis) {
            case 1:
                precio = obtenerPrecio(planta);
                printf("Para la planta seleccionada necesitas un presupuesto de : $%i \n",precio);
                break;
            case 2:
                ChecarPrecio(planta);
                break;
            }
            printf("\n");
            break;
            
        }
        case 4:{
            printf("¡¡   BIENDENIDX A SUELO Y TERRENO   !!");
            printf("\n");
            verificarTipoSuelo(planta);
            printf("\n");
            break;
        }
        case 5:{
            printf("¡¡   BIENDENIDX A TIPS Y CUIDADOS   !!");
            int opcionPrincipal, opcionSecundaria;
            Planta plantas[] = {
            {"Azalea", "Información sobre la Azalea","necesitan un suelo bien drenado y ácido, enriquecido con materia orgánica","Temperatura. 15 a 25 °C Exposición al sol: Las Azaleas no pueden ser expuestas directamente al sol, ya que se quemara, y estará en riesgo de morir","El riego en esta planta es super importante. Se debe mantener, de manera permanente, la humedad del suelo."," Las Azaleas pueden ser susceptibles a plagas como los pulgones o ácaros."},
            {"Bugambilia", "Informacion sobre la Bugambilia", "el suelo debe ser rico en nutrientes", "con un buen drenaje, con un pH entre 5.5 y 6.5.", "Cada 3 días", "La Bugambilia es una planta resistente a muchas plagas. A pesar de esto, la plaga más común que se da son los pulgones."},
            {"Calathea", "Información sobre la Calathea"," sustrato rico en nutrientes y bien drenado. Además, se benefician de fertilizantes suaves aplicados durante la temporada de crecimiento para complementar los nutrientes del suelo","Temperatura. 18 a 26 °C ,Exposición al sol: Para que tu Calathea se vea preciosa debe de tener una luz solar moderada e indirecta junto con un suelo orgánico ","1 vez por semana","Las Calatheas son susceptibles a contraer ácaros."},
            {"Jacaranda", "Información sobre la Jacaranda","luz solar y los nutrientes absorbidos del suelo.","La excelente porosidad del suelo y la circulación de aire sin obstáculos son super importantes para plantar y cultivar el árbol","Cada una o dos semanas","Este árbol es bastante tolerante a las plagas. Si llega a contraer una plagas al usar los insecticidas de manera adecuada, el árbol no presenta complicaciones"},
            {"Peonia", "Información sobre la Peonia","Las peonías obtienen la mayor parte de sus nutrientes a través del suelo. Para un crecimiento saludable, necesitan un suelo bien drenado y rico en materia orgánica","Temperatura. 15 a 25 °C Exposición al sol:Necesita de al menos 6 horas de luz solar.","1 vez por semana"," Las Peonías no son susceptibles a plagas. A pesar de esto pueden verse afectadas por pulgones."},
            {"Venus atrapamoscas", "Información sobre la Venus atrapamoscas","obtienen nutrientes adicionales atrapando insectos. A pesar de que obtienen la mayor parte de sus necesidades nutricionales a través de la fotosíntesis,","Temperatura. 21 a 30 °C,Exposición al sol: Debe de recibir el sol de manera indirecta, ya que si no se  verá afectada y se pueden quemar sus hojas.","No se debe de regar como lo acostumbramos normalmente. Se debe colocar un plato con agua en la parte inferior de la maceta","Es susceptible a ser atacada por insectos de gran tamaño o estados larvales de lepidópteros y coleópteros"},
            };
            printf("\n");
            printf("Deseas...\n");
            printf("\n");
            printf("1. Ver información en consola\n");
            printf("2. Guardar información en archivo\n");
            printf("\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcionPrincipal);
            printf("\n");
        
            printf("\nSeleccione que desea saber:\n");
            printf("\n");
                    printf("1. Alimento para planta\n");
                    printf("2. Cómo hacer que aflore de manera óptima\n");
                    printf("3. Cada cuándo se riega\n");
                    printf("4. Plagas de las que hay que cuidarla\n");
                    printf("\n");
                    printf("Seleccione una opción: ");
                    scanf("%d", &opcionSecundaria);
                    printf("\n");
        
    
                    int cantidadPlantas = sizeof(plantas) / sizeof(plantas[0]);//tamaño de bytes que tiene la variable

                    int opcionesSeleccionadas[100]; // Arreglo para almacenar opciones seleccionadas
                    int plantasSeleccionadas[100]; // Arreglo para almacenar plantas seleccionadas

                    switch (opcionPrincipal) {
                    case 1: // Ver información en consola
                        {
                        MostrarInfo(plantas[planta - 1], opcionSecundaria);
                        break;
                        }
                    case 2:{ // Guardar información
                        FILE *archivo = fopen("informacion_plantas.txt", "a"); // Abre el archivo
                        if (archivo == NULL) {
                        printf("No se pudo abrir el archivo\n");
                        return 1;
                        }else{
                        InfoArchivo(archivo, plantas[planta - 1], opcionSecundaria);
                        fclose(archivo); // Cierra el archivo
                        printf("Información almacenada en el archivo\n");
                        }
                        break;
                        }
        }
        break;
        }
        case 6:{
            return 0;
        }
        default:{
            printf("Eso no es posible.INTENTE DE NUEVO");
            break;
            goto menu2;
        }
    }
    int regres;
    regreso:
    printf("\n¿Desea intentar otra cosa?\n");
    printf("1.Si\n2.No\n");
    scanf("%i",&regres);
    if(regres>2 || regres<1){
        printf("Eso no es posible. INTENTE DE NUEVO");
        goto regreso;
    }
    switch(regres){
        case 1:{
            goto menu2;
            break;
        }
        case 2:{
            return 0;
        }
    }
} 
