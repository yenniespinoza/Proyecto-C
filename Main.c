#include <gtk/gtk.h>
// int on_clicked_boton_equis(GtkWidget*, gpointer);
int revisar(GtkLabel* label);
int contador = 1;
int matriz[3][3];

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
    matriz[0][0] = 0;
  }
  printf("Valor: %d\n", matriz[0][0]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[0][1] = 0;
  }
  printf("Valor: %d\n", matriz[0][1]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[0][2] = 0;
  }
  printf("Valor: %d\n", matriz[0][2]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[1][0] = 0;
  }
  printf("Valor: %d\n", matriz[1][0]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[1][1] = 0;
  }
  printf("Valor: %d\n", matriz[1][1]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[1][2] = 0;
  }
  printf("Valor: %d\n", matriz[1][2]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[2][0] = 0;
  }
  printf("Valor: %d\n", matriz[2][0]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[2][1] = 0;
  }
  printf("Valor: %d\n", matriz[2][1]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

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
    matriz[2][2] = 0;
  }
  printf("Valor: %d\n", matriz[2][2]);
  gtk_widget_set_sensitive ((GtkWidget*) boton, FALSE);
  revisar(label);
}

int revisar(GtkLabel* label){
  if(matriz[0][0] == 1 && matriz[0][1] == matriz[0][0] && matriz[0][0] == matriz[0][2]
	|| matriz[1][0] == 1 && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
	|| matriz[2][0] == 1 && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
	|| matriz[0][0] == 1 && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
	|| matriz[0][1] == 1 && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
	|| matriz[0][2] == 1 && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
	|| matriz[0][0] == 1 && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
	|| matriz[0][2] == 1 && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) {
        printf("Ganaron las equis\n");
        gtk_label_set_text(label, "Ganan las equis.");
      }


}

int main(int argc, char* argv[]) {

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
  //GtkWidget* boton_10;
  GtkWidget* label;

  // GtkWidget* label;

  gtk_init(&argc, &argv);

  builder = gtk_builder_new_from_file (
    "je.glade"
  );

  window = GTK_WIDGET (
      gtk_builder_get_object(builder, "main_window")
  );
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
  //boton_10 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_10"));
  //Comentario
  label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));
  //gtk_label_set_text(label, "Ganan las equis.");


  GtkWidget *image_1 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_2 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_3 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_4 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_5 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_6 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_7 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_8 = gtk_image_new_from_file ("gato.png");
  GtkWidget *image_9 = gtk_image_new_from_file ("gato.png");

  gtk_button_set_image (GTK_BUTTON (boton_1), image_1);
  gtk_button_set_image (GTK_BUTTON (boton_2), image_2);
  gtk_button_set_image (GTK_BUTTON (boton_3), image_3);
  gtk_button_set_image (GTK_BUTTON (boton_4), image_4);
  gtk_button_set_image (GTK_BUTTON (boton_5), image_5);
  gtk_button_set_image (GTK_BUTTON (boton_6), image_6);
  gtk_button_set_image (GTK_BUTTON (boton_7), image_7);
  gtk_button_set_image (GTK_BUTTON (boton_8), image_8);
  gtk_button_set_image (GTK_BUTTON (boton_9), image_9);

  GtkWidget* lista[10] = {boton_1, boton_2, boton_3, boton_4, boton_5, boton_6, boton_7, boton_8, boton_9, label};

  g_signal_connect(boton_1, "clicked", G_CALLBACK(func_boton1), lista);
  g_signal_connect(boton_2, "clicked", G_CALLBACK(func_boton2), lista);
  g_signal_connect(boton_3, "clicked", G_CALLBACK(func_boton3), lista);
  g_signal_connect(boton_4, "clicked", G_CALLBACK(func_boton4), lista);
  g_signal_connect(boton_5, "clicked", G_CALLBACK(func_boton5), lista);
  g_signal_connect(boton_6, "clicked", G_CALLBACK(func_boton6), lista);
  g_signal_connect(boton_7, "clicked", G_CALLBACK(func_boton7), lista);
  g_signal_connect(boton_8, "clicked", G_CALLBACK(func_boton8), lista);
  g_signal_connect(boton_9, "clicked", G_CALLBACK(func_boton9), lista);
  // g_signal_connect(label, "populate-popup", G_CALLBACK(revisar), label);


  gtk_widget_show_all(window);
  gtk_main ();

  return 0;

}
