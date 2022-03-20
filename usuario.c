#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctime>
#include "usuario.h"


//guardar 
void guardarUsuarios(usuario *vUsuario,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("usuarios.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s-%s-%s\n",vUsuario[i].id_usuario,vUsuario[i].nombre_usuario,vUsuario[i].perfil_usuario,vUsuario[i].usuario);
            i++;
        }
        puts("Usuario guardado correctamente");
    }
    fclose(fichero);
}

//GUARDAR ALUMNOS
void guardarAlumnos(alumno *vAlumno,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("alumnos.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s-%s-%s-%s-%s\n",vAlumno[i].id_alum,vAlumno[i].nombre_alum,vAlumno[i].direc_alum,vAlumno[i].local_alum,vAlumno[i].curso,vAlumno[i].grupo);
            i++;
        }
        puts("Alumno guardado correctamente");
    }
    fclose(fichero);
}
//GUARDAR MATERIAS
void guardarMaterias(materia *vMateria,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("materias.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s-%s\n",vMateria[i].id_materia,vMateria[i].nombre_materia,vMateria[i].abrev_materia);
            i++;
        }
        puts("Materia guardado correctamente");
    }
    fclose(fichero);
}
//GUARDAR MATRICULAS
void guardarMatriculas(matricula *vMatricula,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("matricula.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s\n",vMatricula[i].id_materia, vMatricula[i].id_alum);
            i++;
        }
        puts("Matricula guardado correctamente");
    }
    fclose(fichero);
}
//GUARDAR CALIFACIONES
void guardarCalificaciones(matricula *vMatricula,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("calificaciones.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s\n",vMatricula[i].id_materia,vMatricula[i].id_alum);
            i++;
        }
        puts("Matricula guardado correctamente");
    }
    fclose(fichero);
}

//GUARDAR HORARIOS
void guardarHorarios(horario *vHorarios,int n){
    FILE *fichero;
    int i = 0;
    fichero = fopen("horarios.txt","w+");
    if(fichero==NULL){
        printf("ERROR");
    }else{
        while(i<n){
            fprintf(fichero,"%s-%s\n",vHorarios[i].id_profesor,vHorarios[i].dia_clase,vHorarios[i].hora_clase,vHorarios[i].id_materia);
            i++;
        }
        puts("Matricula guardado correctamente");
    }
    fclose(fichero);
}



// METODOS CARGAR

//CARGAR USUARIO//

usuario* cargar usuarios(usuario *vUsuario, int *n){
    FILE*fichero;
    char linea[80];
    char*token;
    *n=0;



    vUsuario=NULL;

    fichero=fopen("Usuarios.txt","r");

    if (fichero==NULL){
        printf("Error al cargar el fichero Usuarios.txt");
    }
    else{

        while{
            (fgets(linea,80,fichero))
        {

            if(strcmp(linea,"/0"))
            {
              vUsuario=(usuario *)realloc(vUsuario,((*n)+1) * sizeof(usuario));

                token = strtok(linea, "-");
                strcpy(vUsuario[*n].id_usuario, token);

                token = strtok(NULL, "-");
                strcpy(vUsuario[*n].nombre_usuario, token);

                token = strtok(NULL, "-");
                strcpy(vUsuario[*n].perfil_usuario, token);

                token = strtok(NULL, "-");
                strcpy(vUsuario[*n].usuario, token);

                token = strtok(NULL, "\n");
                strcpy(vUsuario[*n].contrasena, token);

                (*n)++;
        }
       }
      }

    fclose(fichero);
    return vUsuario;

    }


    }


    alumno* cargar alumnos(alumno*vAlumnos,int*n);{
    FILE*fichero;
    char linea[80];
    char*token;
    *n=0;



    vAlumnos=NULL;

    fichero=fopen("Alumnos.txt","r");

    if (fichero==NULL){
        printf("Error al cargar el fichero Alumnos.txt");
    }
    else{

        while{
            (fgets(linea,80,fichero))
        {

            if(strcmp(linea,"/0"))
            {
              vAlumnos=(alumno *)realloc(vAlumnos,((*n)+1) * sizeof(alumno));

            token = strtok(linea, "-");
                strcpy(vAlumnos[*n].id_alum, token);

                token = strtok(NULL, "-");
                strcpy(vAlumnos[*n].nombre_alum, token);

                token = strtok(NULL, "-");
                strcpy(vAlumnos[*n].direc_alum, token);

                token = strtok(NULL, "-");
                strcpy(vAlumnos[*n].local_alum, token);

                token = strtok(NULL, "-");
                strcpy(vAlumnos[*n].curso, token);

                token = strtok(NULL, "\n");
                strcpy(vAlumnos[*n].grupo, token);

                (*n)++;
        }
       }
      }

    fclose(fichero);
    return vAlumnos
    }


    }


     materia*cargar marerias(materia *vMaterias,int*n);{
    FILE*fichero;
    char linea[80];
    char*token;
    *n=0;



    vMaterias=NULL;

    fichero=fopen("Materias.txt","r");

    if (fichero==NULL){
        printf("Error al cargar el fichero Materias.txt");
    }
    else{

        while{
            (fgets(linea,80,fichero))
        {

            if(strcmp(linea,"/0"))
            {
              vMaterias=(materia *)realloc(vMaterias,((*n)+1) * sizeof(materia ));

                token = strtok(linea, "-");
                strcpy(vMaterias[*n].id_materia, token);

                token = strtok(NULL, "-");
                strcpy(vMaterias[*n].nombre_materia, token);

                token = strtok(NULL, "\n");
                strcpy(vMaterias[*n].abrev_materia, token);

                (*n)++;

                          (*n)++;
        }
       }
      }

    fclose(fichero);
    return vMaterias;

    }


    }

    calificacion*cargar calificaciones(calificacion *vCalificaciones, int*n);{
    FILE*fichero;
    char linea[80];
    char*token;
    *n=0;



   vCalificaciones=NULL;

    fichero=fopen("Calificaciones.txt","r");

    if (fichero==NULL){
        printf("Error al cargar el fichero Calificaciones.txt");
    }
    else{

        while{
            (fgets(linea,80,fichero))
        {

            if(strcmp(linea,"/0"))
            {
              vCalificaciones=(calificacion *)realloc( vCalificaciones,((*n)+1) * sizeof(calificacion ));

                 token = strtok(linea, "-");
                strcpy(Calificaciones[*n].fecha_calif, token);

                token = strtok(NULL, "-");
                strcpy(vCalificaciones[*n].descrip_calif, token);

                token = strtok(NULL, "-");
                strcpy(vCalificaciones[*n].id_materia, token);

                token = strtok(NULL, "-");
                strcpy(vCalificaciones[*n].id_alum, token);

                token = strtok(NULL, "-");
                strcpy(vCalificaciones[*n].valor_calif, token);

                               (*n)++;
        }
       }
      }

    fclose(fichero);
    return vCalificaciones;

    }


    }


//CARGAR MATRICULAS
matricula* CargarMatriculas(matricula *vMatricula, int *n){
    FILE *fichero;

    char linea[80];    //Cadena para guardar una linea entera
    char *token;
    *n=0;
    vMatricula = NULL;
	
    fichero = fopen("matriculas.txt", "r");
    
    vMatricula=(matricula*)malloc(0*sizeof(matricula));

    if (fichero == NULL)
    {
        puts("Error al abrir el fichero matriculas.txt.");
    }
    else
    {
        while (fgets(linea, 60, fichero))
        {
            if (strcmp(linea, "\0"))
            {
                vMatricula = (matricula *) realloc(vMatricula,((*n)+1) * sizeof(matricula));			
				 
                token = strtok(linea, "-");
                strcpy(vMatricula[*n].id_materia, token);

                token = strtok(NULL, "\n");
                strcpy(vMatricula[*n].id_alum, token);

                (*n)++;
            }
        }
   
    }
    fclose(fichero);
	return vMatricula;
}
//CARGAR HORARIO
horario* CargarHorarios(horario *vHorario, int *n){
    FILE *fichero;

    char linea[80];    //Cadena para guardar una linea entera
    char *token;
    *n=0;
    vHorario = NULL;
	
    fichero = fopen("horarios.txt", "r");
    
    vHorario=(horario*)malloc(0*sizeof(horario));

    if (fichero == NULL)
    {
        puts("Error al abrir el fichero horarios.txt.");
    }
    else
    {
        while (fgets(linea, 60, fichero))
        {
            if (strcmp(linea, "\0"))
            {
                vHorario = (horario *) realloc(vHorario,((*n)+1) * sizeof(horario));			
				 
                token = strtok(linea, "-");
                strcpy(vHorario[*n].id_profesor, token);

                token = strtok(NULL, "\n");
                strcpy(vHorario[*n].dia_clase, token);

                token = strtok(NULL, "\n");
                strcpy(vHorario[*n].hora_clase, token);

                token = strtok(NULL, "\n");
                strcpy(vHorario[*n].id_materia, token);


                (*n)++;
            }
        }
   
    }
    fclose(fichero);
	return vHorario;
}
