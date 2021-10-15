// Generation text for 1 type
function type_1_get_text(type_1_data) {
    return `
    <div class="col s12 m6 l6 xl6">
		<div class="print-block__text">
			Все ${type_1_data.length}-буквенные слова, составленные из букв ${type_1_data.text}записаны в алфавитном порядке и пронумерованы. Вот начало списка:</p>
			${type_1_data.examples}
			<p>……</p>
			<p>Запишите слово, которое стоит на ${type_1_data.placeWord}-м месте от начала списка.
		</div>
	</div>
	`
}

// Generation text for 2 type
function type_2_get_text(type_2_data) {
    return `
    <div class="col s12 m6 l6 xl6">
		<div class="print-block__text">
			Все ${type_2_data.length}-буквенные слова, составленные из ${dataSecondType.count} букв ${type_2_data.text}записаны в алфавитном порядке.
			Вот начало списка:
			${type_2_data.examples}
			……
			На каком месте от начала списка стоит слово ${type_2_data.quest}? 
		</div>
	</div>
	`
}

// Generation text for 3 type
function type_3_get_text(type_3_data) {
    return `
    <div class="col s12 m12 l12 xl6">
		<div class="print-block__text">
        	Гоша составляет ${type_3_data.length}-буквенные коды из букв ${type_3_data.text}. Каждую букву нужно
        	использовать ровно 1 раз, при этом буква ${type_3_data.letter} не может стоять на первом месте и перед
        	гласной. Сколько различных кодов может составить Гоша?    
		</div>
	</div>
	`
}
