#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Change button text to "Agregar país"
    ui->agregarPaisButton->setText("Agregar país");

    // Create the layout for the countries
    layoutPaises = new QVBoxLayout();
    ui->contenedorPaises->setLayout(layoutPaises);

    // Connect the "Agregar país" button
    connect(ui->agregarPaisButton, &QPushButton::clicked, this, &MainWindow::onAgregarPaisClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAgregarPaisClicked()
{
    // Crear elementos para la entrada del país
    QWidget *paisWidget = new QWidget(this);
    QHBoxLayout *paisLayout = new QHBoxLayout(paisWidget);

    QCheckBox *checkBox = new QCheckBox("Verificado", this);
    checkBox->setMinimumSize(80, 30);
    QLineEdit *nombrePais = new QLineEdit("País sin nombre", this);
    nombrePais->setMinimumSize(80, 30);
    QLineEdit *nombreCapital = new QLineEdit("Capital sin nombre", this);
    nombreCapital->setMinimumSize(80, 30);

    // Crear botones Editar y Quitar con tamaño ajustado
    QPushButton *botonEditar = new QPushButton("Editar", this);
    botonEditar->setMinimumSize(80, 30); // Establecer tamaño mínimo (ancho, alto)

    QPushButton *botonQuitar = new QPushButton("Quitar", this);
    botonQuitar->setMinimumSize(80, 30); // Establecer tamaño mínimo (ancho, alto)

    // Conectar el botón de quitar
    connect(botonQuitar, &QPushButton::clicked, this, [this, paisWidget]() {
        onQuitarPaisClicked(paisWidget);
    });

    // Conectar el botón de editar
    connect(botonEditar, &QPushButton::clicked, this, [this, nombrePais, nombreCapital]() {
        onEditarPaisClicked(nombrePais, nombreCapital);
    });

    paisLayout->addWidget(checkBox);
    paisLayout->addWidget(nombrePais);
    paisLayout->addWidget(nombreCapital);
    paisLayout->addWidget(botonEditar);
    paisLayout->addWidget(botonQuitar);

    paisWidget->setLayout(paisLayout);

    layoutPaises->addWidget(paisWidget);
}

void MainWindow::onQuitarPaisClicked(QWidget *paisWidget)
{
    layoutPaises->removeWidget(paisWidget);
    delete paisWidget;
}

void MainWindow::onEditarPaisClicked(QLineEdit *nombrePais, QLineEdit *nombreCapital)
{
    // Enable editing for country and capital fields
    nombrePais->setReadOnly(false);
    nombreCapital->setReadOnly(false);
    nombrePais->setFocus();  // Set focus to the country name field for immediate editing
}
