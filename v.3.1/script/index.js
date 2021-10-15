document.addEventListener("DOMContentLoaded", function (event) {
    // Initialization Materalize
    let el = document.querySelector(".tabs")
    let instance = M.Tabs.init(el)

    // Transitions
    document.getElementById('intro__button').addEventListener('click', transition__intro_main)
    document.getElementById('logo_button').addEventListener('click', transition__to_intro)

    // Generation
    document.getElementById('generate_button').addEventListener('click', e => {
        e.preventDefault()

        get_data()
        if (check_data()) {
            console.log('ok')
            generate()
            transition__main_print_block()
        } else {
            console.log('Task not choose')
        }
    })

})