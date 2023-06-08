/*
** EPITECH PROJECT, 2022
** sbml_parser
** File description:
** project.h
*/

#ifndef SBML_PARSER_H
    #define SBML_PARSER_H

    #include "ehwaz/linked_lists.h"

    #ifndef _NO_FLAGS_
        #define NO_FLAGS (0)
    #endif /*_NO_FLAGS_*/

    #ifndef _FLAGS_
        #define FLAGS (1)
    #endif /*_FLAGS_*/

typedef struct sbml_s sbml_t;
typedef struct compartment_s compartment_t;
typedef struct model_s model_t;
typedef struct reaction_s reaction_t;
typedef struct species_s species_t;
typedef struct species_reference_s species_reference_t;

typedef struct parsing_s {
    sbml_t *sbml;
    model_t *model;
    reaction_t *reaction;
    species_reference_t *speciesReference;
} parsing_t;

struct sbml_s {
    int level;
    int version;
    char *xmlns;
};

struct compartment_s {
    char *id;
    char *name;
};

struct model_s {
    char *id;
    char *name;
};

struct reaction_s {
    char *id;
    char *name;
    bool reversible;
};

struct species_s {
    list_t *compartment;
    char *id;
    char *name;
};
struct species_reference_s {
    list_t *species;
    int stoichiometry;
};
/**
* @brief parse the sbml file
* @param filepath
* @param flag
* @return 0 if success, 84 if error
*/
int sbml_parser_core(char const *filepath, int flag);

/**
 * @brief get the sbml info
 * @param sbml
 * @return sbml_t
 */
sbml_t *get_sbml_info(char **sbml);

/**
 * @brief get the model info
 *
 * @param sbml_file
 * @return parsing_t*
 */
parsing_t *parsing_init(char **sbml_file);

model_t *get_model_info(char **sbml);

list_t *populate_list_of_compart(char **sbml);

list_t *populate_all_species_ref_species_list(char **sbml);

#endif /* !SBML_PARSER_H_ */
