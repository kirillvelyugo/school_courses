// Generation data for 1 type
function type_1_get_data() {

}

// Generation data for 2 type
function type_2_get_data() {

}

// Generation data for 3 type
function type_3_get_data() {
    let letters = ['А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я']

    let length = Math.floor(Math.random() * (6 - 3 + 1)) + 3;
    let r = Math.floor(Math.random() * letters.length)

    let text = []
    for (let i = 0; i < length; i++) {
        let choose_letter = Math.floor(Math.random() * letters.length)
        text.push(letters[choose_letter])
        letters.splice(choose_letter, 1)
    }

    r = Math.floor(Math.random() * text.length)
    let letter = text[r]

    if(data.choose_generation_answer){
        type_3_get_answer(length, text, letter)
    }

    return {
        length: length,
        text: text,
        letter: letter
    }
}
