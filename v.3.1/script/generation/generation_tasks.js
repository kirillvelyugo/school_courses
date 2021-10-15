function generate() {
    // // Generation 1 type
    // if (data.type_1.choose_type) {
    //     document.getElementById('type_1_print-block').classList.remove('_hide');

    //     for (let c = 1; c <= data.type_1.count_task; c++) {
    //         let type_1_data = type_1_get_data()
    //         let type_1_text = type_1_get_text(type_1_data)

    //         document.getElementById('type_1_insert') += type_1_text
    //     }
    // }

    // // Generation 2 type
    // if (data.type_2.choose_type) {
    //     document.getElementById('type_2_print-block').classList.remove('_hide');

    //     for (let c = 1; c <= data.type_2.count_task; c++) {
    //         let type_2_data = type_2_get_data()
    //         let type_2_text = type_2_get_text(type_2_data)

    //         document.getElementById('type_2_insert') += type_2_text
    //     }
    // }

    // Generation 3 type
    if (data.type_3.choose_type) {
        document.getElementById('type_3_print-block').classList.remove('_hide');

        for (let c = 1; c <= data.type_3.count_task; c++) {
            let type_3_data = type_3_get_data()
            let type_3_text = type_3_get_text(type_3_data)

            document.getElementById('type_3_insert').innerHTML += type_3_text
        }
    }
}