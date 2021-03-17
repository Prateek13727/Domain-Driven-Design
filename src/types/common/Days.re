module Days: {
  type t = pri int;
  let create: int => option(t);
} = {
  type t = int;
  let create = num => num > 0 ? Some(num) : None;
};

let newDay = (days) => {
  switch (Days.create(days)) {
    | Some(b) => Js.log(b);
    | None => ()
  }
}

