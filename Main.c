// #include<stdio.h>
#include <gtk/gtk.h>

int on_clicked_boton_equis (GtkWidget* widget, gpointer data){
  // Asignarle una imagen al boton_1
  GtkButton *boton = (GtkButton*) data;
  GtkWidget *image = gtk_image_new_from_file ("equis.png");
  // GtkWidget *button = gtk_button_new ();
  gtk_button_set_image (GTK_BUTTON (boton), image);
}

int on_clicked_boton_circulo (GtkWidget* widget, gpointer data){
  // Asignarle una imagen al boton_1
  GtkButton *boton = (GtkButton*) data;
  GtkWidget *image = gtk_image_new_from_file ("circulo.png");
  // GtkWidget *button = gtk_button_new ();
  gtk_button_set_image (GTK_BUTTON (boton), image);
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

  // Gtkwidget* boton_marcador1, boton_marcador2, boton_reinicio;
  gtk_init(&argc, &argv);

  builder = gtk_builder_new_from_file (
    "prueba.glade"
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

  //GtkWidget *image = gtk_image_new_from_file ("/home/allanaq/Desktop/Programacion/Proyecto-C/equis.png");
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


  gtk_widget_show_all(window);
  gtk_main ();

  return 0;

}
