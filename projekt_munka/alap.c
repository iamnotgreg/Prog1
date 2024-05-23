#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void term_c()
{
    printf("#include <stdio.h>\n\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"Hello world!\");\n");
    printf("    return 0;\n");
    printf("}\n");
}

void term_py()
{
    printf("print(\"Hello world!\")\n");
}

void term_sh()
{
    printf("echo \"Hello world!\"\n");
}

void term_cpp()
{
    printf("#include <iostream>\n\n");
    printf("int main()\n");
    printf("{\n");
    printf("    using namespace std;");
    printf("    cout << \"Hello world!\";\n");
    printf("    return 0;\n");
    printf("}\n");
}

void make_c()
{
    FILE *existing_file = fopen("main.c", "r");
    if (existing_file != NULL) {
        fclose(existing_file);
        printf("Error: main.c file already exists\n");
        exit(1);
    }

    FILE *file = fopen("main.c", "w");
    fprintf(file, "#include <stdio.h>\n\n");
    fprintf(file, "int main()\n");
    fprintf(file,"{\n");
    fprintf(file, "\tprintf(\"Hello world!\");\n");
    fprintf(file, "\treturn 0;\n");
    fprintf(file, "}\n");
    fclose(file);
}

void make_py()
{
    FILE *existing_file = fopen("main.py", "r");
    if (existing_file != NULL) {
        fclose(existing_file);
        printf("Error: main.py file already exists\n");
        exit(1);
    }

    FILE *file = fopen("main.py", "w");
    fprintf(file, "print(\"Hello world!\")\n");
    fclose(file);
}

void make_sh()
{
    FILE *existing_file = fopen("main.sh", "r");
    if (existing_file != NULL) {
        fclose(existing_file);
        printf("Error: main.sh file already exists\n");
        exit(1);
    }

    FILE *file = fopen("main.sh", "w");
    fprintf(file, "echo \"Hello world!\"\n");
    fclose(file);
}

void make_cpp()
{
    FILE *existing_file = fopen("main.cpp", "r");
    if (existing_file != NULL) {
        fclose(existing_file);
        printf("Error: main.cpp file already exists\n");
        exit(1);
    }

    FILE *file = fopen("main.cpp", "w");
    fprintf(file, "#include <iostream>\n\n");
    fprintf(file, "int main()\n");
    fprintf(file,"{\n");
    fprintf(file,"\tusing namespace std;");
    fprintf(file, "\tcout << \"Hello world!\";\n");
    fprintf(file, "\treturn 0;\n");
    fprintf(file, "}\n");
    fclose(file);
}

void version()
{
    puts("alap v0.0.4");
}

void help()
{
    puts("alap v0.0.4");
    puts("");
    puts("Usage: alap <template_id> [option]");
    puts("");
    puts("Available options:");
    puts("");
    puts("-h, --help    show this help");
    puts("-v, --version     version info");
    puts("--stdout      don't create source file, print result to stdout");
    puts("");
    puts("Available templates:");
    puts("");
    puts("* c   - C source code [main.c]");
    puts("* py   - Python 3 source code [main.py]");
    puts("* sh      -  Bash source code [main.sh]");
    puts("* c++     - C++ source code [main.cpp]");
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        puts("");
        puts("Usage: alap <template_id> [option]");
        puts("");
        puts("Available languages: ");
        puts("* c");
        puts("* py");
        puts("* sh");
        puts("* c++ t");
        puts("");
        return 0;
    }

    if(strcmp(argv[1],"-h") == 0 || strcmp(argv[1], "--help") == 0)
    {
        help();
    } else if(strcmp(argv[1],"-v") == 0 || strcmp(argv[1], "--version") == 0)
    {
        version();
    } else if (strcmp(argv[1], "c") == 0) {
        if (argc > 2 && strcmp(argv[2], "--stdout") == 0) {
            term_c();
            return 0;
        }
        make_c();
    } else if (strcmp(argv[1], "py") == 0) {
        if (argc > 2 && strcmp(argv[2], "--stdout") == 0) {
            term_py();
            return 0;
        }
        make_py();
    } else if (strcmp(argv[1], "sh") == 0) {
        if (argc > 2 && strcmp(argv[2], "--stdout") == 0) {
            term_sh();
            return 0;
        }
        make_sh();
    } else if (strcmp(argv[1], "cpp") == 0) {
        if (argc > 2 && strcmp(argv[2], "--stdout") == 0) {
            term_cpp();
            return 0;
        }
        make_cpp();
    } else
    {
        printf("Unsupported language: %s\n", argv[1]);
        return 1;
    }
    return 0;
}
