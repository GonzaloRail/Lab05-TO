#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Crear el layout principal para las tareas
    layoutTareas = new QVBoxLayout();
    ui->contenedorTareas->setLayout(layoutTareas);

    // Conectar el botón de agregar tarea
    connect(ui->agregarTareaButton, &QPushButton::clicked, this, &MainWindow::onAgregarTareaClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAgregarTareaClicked()
{
    // Crear los elementos de la tarea
    QWidget *tareaWidget = new QWidget(this);
    QHBoxLayout *tareaLayout = new QHBoxLayout(tareaWidget);

    QCheckBox *checkBox = new QCheckBox("Tarea sin título", this);
    QPushButton *botonEditar = new QPushButton("Editar", this);
    QPushButton *botonQuitar = new QPushButton("Quitar", this);

    // Conectar el botón de quitar tarea
    connect(botonQuitar, &QPushButton::clicked, this, [this, tareaWidget]() {
        onQuitarTareaClicked(tareaWidget);
    });

    tareaLayout->addWidget(checkBox);
    tareaLayout->addWidget(botonEditar);
    tareaLayout->addWidget(botonQuitar);

    tareaWidget->setLayout(tareaLayout);

    layoutTareas->addWidget(tareaWidget);
}


void MainWindow::onQuitarTareaClicked(QWidget *tareaWidget)
{
    layoutTareas->removeWidget(tareaWidget); // Remover del layout
    delete tareaWidget; // Liberar la memoria del widget
}

