#include<stdio.h>
#include<gtk/gkt.h>

void on_clicked_boton_1 (Gtkwidget* widget, gpointer data){
  /*Asignarle una imagen al boton_1 */
  GtkWidget *image = gtk_image_new_from_file ("...");
  GtkWidget *button = gtk_button_new ();
  
  gtk_button_set_image (GTK_BUTTON (button), image);  

}

int int main(int argc, char argv[]) {
  GtkBuilder*builder;
  Gtkwidget* window;
  Gtkwidget* boton_1, boton2, boton3, boton_4,boton5, boton_6,boton_7,boton_8, boton_9;
  Gtkwidget* boton_marcador1, boton_marcador2, boton_reinicio;
  gtk init(&argc, &argv);

  builder = gtk_builder_new_from_file (
    "locacion del archivo de glade"

  );

  window = GTK_WIDGET (
      gtk_builder_get_object(builder, "main_window")
  );
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);


  /*Botones fila 1 */
  boton_1 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_1"));
  boton_2 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_2"));
  boton_3 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_3"));
  /*Botones fila 2 */
  boton_4 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_4"));
  boton_5 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_5"));
  boton_6 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_6"));
  /*Botones fila 3 */
  boton_7 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_7"));
  boton_8 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_8"));
  boton_9 = GTK_WIDGET(gtk_builder_get_object(builder, "boton_9"));
  /*Botones marcador */
  boton_marcador1 = GTK_WIDGET(gtk_builder_get_object(builder, "marcador1 "));
  boton_marcador2 = GTK_WIDGET(gtk_builder_get_object(builder, "marcador2 "));
  /*Botones reiniciar */
  boton_reinicio = GTK_WIDGET(gtk_builder_get_object(builder, "reiniciar "));

  /*Conectar las señales de los botones del panel 3x3 */
  g_signal_connect(boton_1, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_2, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_3, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_4, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_5, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_6, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_7, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_8, "clicked", G_CALLBACK(Funcion_Pendiente), );
  g_signal_connect(boton_9, "clicked", G_CALLBACK(Funcion_Pendiente), );

  /*Conectar las señales del boton de reinicio */
  g_signal_connect(boton_reinicio, "clicked", G_CALLBACK(Funcion_Pendiente), );




  gtk_widget_show_all();
  gtk main ();

  return 0;

}
