/*                    Universidad de Costa Rica
                 Escuela de Ingenieria Electrica
            IE0117 Programacion Bajo Plataformas Abiertas

                        Proyecto de C
                          JUEGO GATO
 Elaborado por: Allan Alvarado Quirós <allan.alvarado@ucr.ac.cr>
                Yennifer Espinoza Fuentes  <yennifer.espinoza@ucr.ac.cr>
                Sharlotte Orozco Rojas    <sharlotte.orozco@ucr.ac.cr>
                
 Fecha: 03/2022

 Descripcion: Juego Gato.*/

#include <gtk/gtk.h>
#include <stdbool.h>
//variables globales
int revisar(gpointer lista);
int contador = 1;
int matriz[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int clicks = 0;
bool ganador = false;
//funcion para el boton 1
int func_boton1(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[0];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[0][0] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[0][0] = 2;
  }
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 2
int func_boton2(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[1];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[0][1] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[0][1] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 3
int func_boton3(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[2];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[0][2] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[0][2] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 4
int func_boton4(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[3];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[1][0] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[1][0] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 5
int func_boton5(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[4];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[1][1] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[1][1] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 6
int func_boton6(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[5];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[1][2] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[1][2] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 7
int func_boton7(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[6];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[2][0] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[2][0] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 8
int func_boton8(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[7];
  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[2][1] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[2][1] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//funcion para el boton 9
int func_boton9(GtkWidget* widget, gpointer lista){
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton = (GtkButton*) lista_widget[8];

  GtkWidget *image_equis = gtk_image_new_from_file ("equis.png");
  GtkWidget *image_circulo = gtk_image_new_from_file ("circulo.png");

  if (contador == 1){
    gtk_button_set_image (GTK_BUTTON (boton), image_equis);
    contador --;
    matriz[2][2] = 1;
  } else {
    gtk_button_set_image (GTK_BUTTON (boton), image_circulo);
    contador ++;
    matriz[2][2] = 2;
  }

  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  clicks++;
  revisar(lista);
}
//Funcion revisar, se empleo para revisar quien iba a hacer el ganador 
int revisar(gpointer lista){

  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  GtkButton *boton_1 = (GtkButton*) lista_widget[0];
  GtkButton *boton_2 = (GtkButton*) lista_widget[1];
  GtkButton *boton_3 = (GtkButton*) lista_widget[2];
  GtkButton *boton_4 = (GtkButton*) lista_widget[3];
  GtkButton *boton_5 = (GtkButton*) lista_widget[4];
  GtkButton *boton_6 = (GtkButton*) lista_widget[5];
  GtkButton *boton_7 = (GtkButton*) lista_widget[6];
  GtkButton *boton_8 = (GtkButton*) lista_widget[7];
  GtkButton *boton_9 = (GtkButton*) lista_widget[8];
  GtkWidget *image_win_1 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_2 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_3 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_4 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_5 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_6 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_7 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_8 = gtk_image_new_from_file("Gato_encerrado.png");
  GtkWidget *image_win_9 = gtk_image_new_from_file("Gato_encerrado.png");
  //Logica para el ganador de la figura de equis, con matrices
  if (matriz[0][0] == 1 && matriz[0][1] == 1 && matriz[0][2] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_2, image_win_2);
    gtk_button_set_image(boton_3, image_win_3);
    ganador = true;

  } else if (matriz[1][0] == 1 && matriz[1][1] == 1 && matriz[1][2] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_4, image_win_4);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_6, image_win_6);
    ganador = true;

  } else if (matriz[2][0] == 1 && matriz[2][1] == 1 && matriz[2][2] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_7, image_win_7);
    gtk_button_set_image(boton_8, image_win_8);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][0] == 1 && matriz[1][0] == 1 && matriz[2][0] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_4, image_win_4);
    gtk_button_set_image(boton_7, image_win_7);
    ganador = true;

  } else if (matriz[0][1] == 1 && matriz[1][1] == 1 && matriz[2][1] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_2, image_win_2);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_8, image_win_8);
    ganador = true;

  } else if (matriz[0][2] == 1 && matriz[1][2] == 1 && matriz[2][2] == 1) {
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_3, image_win_3);
    gtk_button_set_image(boton_6, image_win_6);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1) {
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1){
    gtk_label_set_text(label, "  Ganan las equis!  ");
    gtk_button_set_image(boton_3, image_win_3);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_7, image_win_7);
    ganador = true;

  } else if (clicks == 9){
    gtk_label_set_text(label, "     EMPATE!!!     ");
  }


  //Logica para el ganador de la figura circulo, con matrices
  if (matriz[0][0] == 2 && matriz[0][1] == 2 && matriz[0][2] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_2, image_win_2);
    gtk_button_set_image(boton_3, image_win_3);
    ganador = true;

  } else if (matriz[1][0] == 2 && matriz[1][1] == 2 && matriz[1][2] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_4, image_win_4);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_6, image_win_6);
    ganador = true;

  } else if (matriz[2][0] == 2 && matriz[2][1] == 2 && matriz[2][2] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_7, image_win_7);
    gtk_button_set_image(boton_8, image_win_8);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][0] == 2 && matriz[1][0] == 2 && matriz[2][0] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_4, image_win_4);
    gtk_button_set_image(boton_7, image_win_7);
    ganador = true;

  } else if (matriz[0][1] == 2 && matriz[1][1] == 2 && matriz[2][1] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_2, image_win_2);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_8, image_win_8);
    ganador = true;

  } else if (matriz[0][2] == 2 && matriz[1][2] == 2 && matriz[2][2] == 2) {
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_3, image_win_3);
    gtk_button_set_image(boton_6, image_win_6);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][0] == 2 && matriz[1][1] == 2 && matriz[2][2] == 2) {
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_1, image_win_1);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_9, image_win_9);
    ganador = true;

  } else if (matriz[0][2] == 2 && matriz[1][1] == 2 && matriz[2][0] == 2){
    gtk_label_set_text(label, " Ganan los circulos!");
    gtk_button_set_image(boton_3, image_win_3);
    gtk_button_set_image(boton_5, image_win_5);
    gtk_button_set_image(boton_7, image_win_7);
    ganador = true;

  }
  // Si el ganador es igual a true, todos los botones se bloquean
  if (ganador == true){
    gtk_widget_set_sensitive ((GtkWidget*) boton_1, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_2, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_3, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_4, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_5, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_6, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_7, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_8, FALSE);
    gtk_widget_set_sensitive ((GtkWidget*) boton_9, FALSE);
  }
}
//Funcion para el boton de reinicio
int func_boton_r(GtkWidget* widget, gpointer lista){
  //recibe: los botones, imagenes del gato, label, matriz
  GtkWidget **lista_widget = (GtkWidget**) lista;
  GtkLabel *label = (GtkLabel*) lista_widget[9];
  //Botones
  GtkButton *boton_1 = (GtkButton*) lista_widget[0];
  GtkButton *boton_2 = (GtkButton*) lista_widget[1];
  GtkButton *boton_3 = (GtkButton*) lista_widget[2];
  GtkButton *boton_4 = (GtkButton*) lista_widget[3];
  GtkButton *boton_5 = (GtkButton*) lista_widget[4];
  GtkButton *boton_6 = (GtkButton*) lista_widget[5];
  GtkButton *boton_7 = (GtkButton*) lista_widget[6];
  GtkButton *boton_8 = (GtkButton*) lista_widget[7];
  GtkButton *boton_9 = (GtkButton*) lista_widget[8];
 //Imagenes del gato
 GtkWidget *image_1 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_2 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_3 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_4 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_5 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_6 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_7 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_8 = gtk_image_new_from_file ("gato.png");
 GtkWidget *image_9 = gtk_image_new_from_file ("gato.png");

  int i, j;
  //iniciar la matriz en 0
  for(i=0; i<3; i++){
  					for(j=0; j<3; j++){
  						matriz [i][j]=0;
            }
  }
  //Se llama estas variables para que se inicialicen
  contador = 1;
  clicks = 0;
  ganador = false;

  gtk_button_set_image (GTK_BUTTON (boton_1), image_1);
  gtk_button_set_image (GTK_BUTTON (boton_2), image_2);
  gtk_button_set_image (GTK_BUTTON (boton_3), image_3);
  gtk_button_set_image (GTK_BUTTON (boton_4), image_4);
  gtk_button_set_image (GTK_BUTTON (boton_5), image_5);
  gtk_button_set_image (GTK_BUTTON (boton_6), image_6);
  gtk_button_set_image (GTK_BUTTON (boton_7), image_7);
  gtk_button_set_image (GTK_BUTTON (boton_8), image_8);
  gtk_button_set_image (GTK_BUTTON (boton_9), image_9);

  gtk_widget_set_sensitive ((GtkWidget*) boton_1, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_2, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_3, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_4, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_5, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_6, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_7, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_8, TRUE);
  gtk_widget_set_sensitive ((GtkWidget*) boton_9, TRUE);

  gtk_label_set_text(label, "   Sigue jugando!   ");
}

int main(int argc, char* argv[]) {
  //variables
  GtkBuilder* builder;
  GtkWidget* window;
  GtkWidget* boton_1;
  GtkWidget* boton_2;
  GtkWidget* boton_3;
  GtkWidget* boton_4;
  GtkWidget* boton_5;
  GtkWidget* boton_6;
  GtkWidget* boton_7;
  GtkWidget* boton_8;
  GtkWidget* boton_9;
  GtkWidget* boton_r;
  GtkWidget* label;


  gtk_init(&argc, &argv);
  //Se llama el archivo glade
  builder = gtk_builder_new_from_file (
    "ventana.glade"
  );

  window = GTK_WIDGET (
      gtk_builder_get_object(builder, "main_window")
  );
  //Señal para que la ventana se cierre
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);


  //Botones fila 1
  boton_1 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_1"));
  boton_2 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_2"));
  boton_3 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_3"));
  //Botones fila 2
  boton_4 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_4"));
  boton_5 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_5"));
  boton_6 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_6"));
  //Botones fila 3
  boton_7 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_7"));
  boton_8 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_8"));
  boton_9 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_9"));

  //Label del mensaje, ganador e instrucciones
  label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));
  //Boton de reinicio
  boton_r = GTK_WIDGET(gtk_builder_get_object(builder, "boton_r"));
  //Se llama la imagen del gato principal
  GtkWidget *image_1 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_2 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_3 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_4 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_5 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_6 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_7 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_8 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_9 = gtk_image_new_from_file ("gato.png");
  //Se establece la imagen del gato principal en cada uno de los 9 botones de la matriz
  gtk_button_set_image (GTK_BUTTON (boton_1), image_1);
  gtk_button_set_image (GTK_BUTTON (boton_2), image_2);
  gtk_button_set_image (GTK_BUTTON (boton_3), image_3);
  gtk_button_set_image (GTK_BUTTON (boton_4), image_4);
  gtk_button_set_image (GTK_BUTTON (boton_5), image_5);
  gtk_button_set_image (GTK_BUTTON (boton_6), image_6);
  gtk_button_set_image (GTK_BUTTON (boton_7), image_7);
  gtk_button_set_image (GTK_BUTTON (boton_8), image_8);
  gtk_button_set_image (GTK_BUTTON (boton_9), image_9);
  //se crea un array con los bonotes y el label para llamarlos fuera del int main
  GtkWidget* lista[19] = {boton_1, boton_2, boton_3, boton_4, boton_5, boton_6, boton_7, boton_8, boton_9, label};
  //Conexion de las señales de los botones
  g_signal_connect(boton_1, "clicked", G_CALLBACK(func_boton1), lista);
  g_signal_connect(boton_2, "clicked", G_CALLBACK(func_boton2), lista);
  g_signal_connect(boton_3, "clicked", G_CALLBACK(func_boton3), lista);
  g_signal_connect(boton_4, "clicked", G_CALLBACK(func_boton4), lista);
  g_signal_connect(boton_5, "clicked", G_CALLBACK(func_boton5), lista);
  g_signal_connect(boton_6, "clicked", G_CALLBACK(func_boton6), lista);
  g_signal_connect(boton_7, "clicked", G_CALLBACK(func_boton7), lista);
  g_signal_connect(boton_8, "clicked", G_CALLBACK(func_boton8), lista);
  g_signal_connect(boton_9, "clicked", G_CALLBACK(func_boton9), lista);
  g_signal_connect(boton_r, "clicked", G_CALLBACK(func_boton_r), lista);



  gtk_widget_show_all(window);
  gtk_main ();

  return 0;

}
